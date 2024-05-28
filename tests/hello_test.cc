#include <gtest/gtest.h>

namespace hello_test {
  
TEST(HelloTest, BasicAssertions) {
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(4 * 5, 20);
}
}  // namespace hello_test
