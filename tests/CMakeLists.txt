include(CTest)

# enable testing functionality
enable_testing()


add_executable(prova-test prova-test.cpp)

add_test(NAME prova-test
  COMMAND $<TARGET_FILE:prova-test>)