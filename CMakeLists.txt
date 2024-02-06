cmake_minimum_required(VERSION "3.12")

project("algorithms-datastructures" 
  VERSION "0.0.1"
  DESCRIPTION "implementations of CS algorithms and datastructures"
  HOMEPAGE_URL "https://github.com/OpenCSAlgorithms/algorithms-datastructures")

#if(EXAMPLE_PROJECT_BUILD_TESTING)
#    enable_testing()
#endif()

add_library(${PROJECT_NAME}
  "src/prova.cpp"
)

add_subdirectory(tests)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
include(CPack)



#if(EXAMPLE_PROJECT_BUILD_TESTING)
#  add_subdirectory(tests)
#endif()