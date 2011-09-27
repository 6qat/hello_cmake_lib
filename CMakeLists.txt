PROJECT(hello_cmake_lib)
FIND_PACKAGE(Qt4 REQUIRED)
SET(QT_DONT_USE_QTGUI TRUE) #this lib doesn't need GUI module, which is included by default

SET(hello_cmake_SOURCES mylib.cpp)

INCLUDE( ${QT_USE_FILE} )
ADD_DEFINITIONS( ${QT_DEFINITIONS} )

ADD_LIBRARY( hello_cmake SHARED ${hello_cmake_SOURCES} )
TARGET_LINK_LIBRARIES( hello_cmake ${QT_LIBRARIES} )

