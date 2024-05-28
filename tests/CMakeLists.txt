include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY  https://github.com/google/googletest.git
  GIT_TAG         v1.14.0
)

enable_testing()

FetchContent_MakeAvailable(googletest)

add_executable(hello_test hello_test.cc)
target_link_libraries(hello_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)