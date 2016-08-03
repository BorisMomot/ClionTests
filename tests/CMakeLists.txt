set(Test1_SOURCE_FILES Test1.cpp Test1.h test.cpp TestStates.cpp TestStates.h TestAbstractFactory.cpp TestAbstractFactory.h)

add_executable(test1 ${Test1_SOURCE_FILES})
target_link_libraries(test1 gtest Class1Lib statesLib AbstractFactoryLib)
target_include_directories(test1 PUBLIC Class1Lib PUBLIC statesLib PUBLIC AbstractFactoryLib)
#target_include_directories(test1 PUBLIC Class1Lib PUBLIC statesLib)