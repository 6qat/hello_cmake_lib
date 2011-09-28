# How to compile :

* Create a build directory and "cd" into it.
* cmake ..
* make

## Libraries dynamic linked into this lib:

air:build guiga$ otool -L libhello_cmake.dylib 
libhello_cmake.dylib:
	/Users/guiga/Documents/workspace/hello_cmake_lib/build/libhello_cmake.dylib (compatibility version 0.0.0, current version 0.0.0)
	/Users/guiga/QtSDK/Desktop/Qt/474/gcc/lib/QtCore.framework/Versions/4/QtCore (compatibility version 4.7.0, current version 4.7.4)
	/usr/lib/libstdc++.6.dylib (compatibility version 7.0.0, current version 52.0.0)
	/usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 159.0.0)


