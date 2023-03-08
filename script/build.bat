rmdir /S /Q build
rmdir /S /Q install

mkdir build\x86
mkdir build\x64

cd build\x86
cmake -A Win32 ..\..
cmake --build . --config Debug
cmake --build . --config Release
cmake --install .

cd ..\x64
cmake -A x64 ..\..
cmake --build . --config Debug
cmake --build . --config Release
cmake --install .