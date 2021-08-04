## Run Developer Command Prompt for VS 2019
---
Run cmake under the CMakeLists.txt folder
>> cmake -G "Visual Studio 16 2019" -A x64 -S ./ -B build64 -DQTDIR="D:/Qt/5.13.2/msvc2017_64"

Build project

* Use msbuild
>> msbuild build64/ALL_BUILD.vcxproj (Default Configuration is Debug)

>> msbuild build64/ALL_BUILD.vcxproj /p:Configuration=Release

* Use cmake --build
>> cmake --build build64 --target ALL_BUILD --config Release

>> cmake --build build64 (Default --config is Debug)

>> cmake --build build64 --config Release
---
### Test helloworld.exe
Set Environment variable under testing
>> set PATH=%PATH%;D:\Qt\5.13.2\msvc2017_64\bin

>> cd build64\bin\Debug

>> helloworld.exe