param (
    [string]$mode = "build",
    [string]$cmode = "build"
)

$mingw64Suffix = "C:\msys64\mingw64"

$buildDir = "$PSScriptRoot\build"
$deployDir = "$PSScriptRoot\deploy"
$exeName = "popsim.exe"
$exePath = "$deployDir\$exeName"
$extraDlls = @(
    "$mingw64Suffix\bin\libgcc_s_seh-1.dll"
    "$mingw64Suffix\bin\libstdc++-6.dll"
    "$mingw64Suffix\bin\libwinpthread-1.dll"
    "$mingw64Suffix\bin\libboost_filesystem-mt.dll"
)

if ($mode -eq "build") {
    cmake --build .

} elseif ($mode -eq "deploy") {
    cmake --build .

    if (!(Test-Path $deployDir)) {
        New-Item -ItemType Directory -Path $deployDir | Out-Null
    }

    Copy-Item -Path "$buildDir\$exeName" -Destination $exePath -Force

    & windeployqt $exePath

    foreach ($dll in $extraDlls) {
        Copy-Item -Path $dll -Destination $deployDir -Force
    }

} elseif ($mode -eq "clean"){
    if ($cmode -eq "build"){
        Remove-Item -Recurse -Force $buildDir
    } elseif ($cmode -eq "deploy"){
        Remove-Item -Recurse -Force $deployDir
    } else {
        Write-Error "Invalid clearing mode. Use: build or deploy"
    }
} else {
    Write-Error "Invalid mode. Use: build or deploy"
}
