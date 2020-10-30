#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.h"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddEvaluatePositive) {
    Op* test1 = new Op(2);
    Op* test2 = new Op(3);
    Add* test3 = new Add(test1, test2);
    EXPECT_EQ(test3->evaluate(), 5);
}

TEST(AddTest, AddStringifyPositive) {
    Op* test1 = new Op(2);
    Op* test2 = new Op(3);
    Add* test3 = new Add(test1, test2);
    EXPECT_EQ(test3->stringify(), "2.000000+3.000000");
}

#endif //__OP_TEST_HPP__
