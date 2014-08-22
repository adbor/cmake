set PATH=C:\Compilers\binutils\;C:\Compilers\MinGW\bin\;%PATH%

md build\win
cd build\win

"C:\Program Files (x86)\CMake\bin\cmake" -G"Unix Makefiles" ..\..\
make 
