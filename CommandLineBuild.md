## Run Developer Command Prompt for VS 2019
---
Run cmake under the CMakeLists.txt folder
>> cmake -G "Visual Studio 16 2019" -A x64 -S ./ -B build64

Use msbuild to build project
>> msbuild build64/helloworld.vcxproj (Default Configuration is Debug)

>> msbuild build64/helloworld.vcxproj /p:Configuration=Release

---
### Test helloworld.exe
Set Environment variable under testing
>> set PATH=%PATH%;D:\Qt\5.13.2\msvc2017_64\bin

>> cd build64\Debug

>> helloworld.exe