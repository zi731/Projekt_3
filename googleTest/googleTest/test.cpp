#include "pch.h"
#include <iostream>
#include <vector>

TEST(TestMergeSort, TestName) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t;
	t.sort(a, 0, a.size() - 1);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, TestName2) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}