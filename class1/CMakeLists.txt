set(Class1_SOURCE_FILES
        MyClass.cpp MyClass.h Gr1TSCk.jpg)

add_library(Class1Lib STATIC ${Class1_SOURCE_FILES})
target_include_directories(Class1Lib PUBLIC ${CMAKE_SOURCE_DIR})

configure_file( ${PROJECT_SOURCE_DIR}/class1/script1.sh.in ${CMAKE_BINARY_DIR}/script.sh)

file(GLOB MYPICTURES ${CMAKE_SOURCE_DIR}/class1/*.jpg)
file(COPY ${MYPICTURES} DESTINATION /home/boris/ClionProjects/buildDir/Debug)
file(GLOB_RECURSE data Gr1TSCk.jpg)

install(FILES Gr1TSCk.jpg DESTINATION ${CMAKE_INSTALL_NAME_DIR}/)



#
#set(RESOURCES_PATH "${PROJECT_SOURCE_DIR}/resources/"
#        # configure a header file to pass some of the CMake settings
#        # to the source code
#        configure_file (
#        "${PROJECT_SOURCE_DIR}/configuration.h.in"
#        "${PROJECT_BINARY_DIR}/configuration.h"
#        )
#
#        # add the binary tree to the search path for include files
#        # so that we will find TutorialConfig.h
#        include_directories("${PROJECT_BINARY_DIR}")