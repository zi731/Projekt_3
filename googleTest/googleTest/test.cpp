#include "pch.h"
#include <iostream>
#include <vector>

TEST(TestMergeSort, Test_1) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_2) {
	std::vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	std::vector<int> b = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_3) {
	std::vector<int> a;
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		a.push_back(rand() % 101);
	}
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

TEST(TestMergeSort, Test_4) {
	std::vector<int> a = {-8, -5, -7, -4, -6, -1, -2, -3};
	std::vector<int> b = {-8, -7, -6, -5, -4, -3, -2, -1};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_5) {
	std::vector<int> a = {-4, 6, -23, 56, -43, -3, -7, 1, 0};
	std::vector<int> b = {-43, -23, -7, -4, -3, 0, 1, 6, 56};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_6) {
	std::vector<int> a;
	std::vector<int> b;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_7) {
	std::vector<int> a = {5};
	std::vector<int> b = {5};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_8) {
	std::vector<int> a = {1, 5, 7, 1, 1, 7, 5, 5, 5, 1, 3};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

TEST(TestMergeSort, Test_9) {
	std::vector<int> a = {-6, -6, -9, -2, -2, -6, -9, -9, -2, -8};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}
/*
TEST(TestMergeSort, Test_10) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_11) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_12) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

TEST(TestMergeSort, Test_13) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}*/