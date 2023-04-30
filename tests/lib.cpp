#include "simple_lib/lib.h"

#include <gtest/gtest.h>

TEST(simple_lib, basic)
{
    ASSERT_EQ(simple_lib::add("2", "3"), "ans-5");
}