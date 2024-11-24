/// @file test.cpp Plik g³ówny programu, zawieraj¹cy testy

#include "pch.h"
#include <iostream>
#include <vector>

/// @brief Test który sprawdza, czy algorytm zachowuje tablicê niezmienion¹, gdy jest ju¿ posortowana rosn¹co
TEST(TestMergeSort, Test_1) {
	std::vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm potrafi posortowaæ tablicê, która jest posortowana w odwrotnej kolejnoœci
TEST(TestMergeSort, Test_2) {
	std::vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	std::vector<int> b = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje losow¹ tablicê liczb
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

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablice tylko z liczbami ujemnymi
TEST(TestMergeSort, Test_4) {
	std::vector<int> a = {-8, -5, -7, -4, -6, -1, -2, -3};
	std::vector<int> b = {-8, -7, -6, -5, -4, -3, -2, -1};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablice z liczbami ujemnymi i liczbami dodatnimi
TEST(TestMergeSort, Test_5) {
	std::vector<int> a = {-4, 6, -23, 56, -43, -3, -7, 1, 0};
	std::vector<int> b = {-43, -23, -7, -4, -3, 0, 1, 6, 56};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm obs³uguje pust¹ tablicê bez rzucania wyj¹tkiem
TEST(TestMergeSort, Test_6) {
	std::vector<int> a;
	std::vector<int> b;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm nie zmienia tablicy, która zawiera tylko jeden element
TEST(TestMergeSort, Test_7) {
	std::vector<int> a = {5};
	std::vector<int> b = {5};
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablicê z duplikatami liczb
TEST(TestMergeSort, Test_8) {
	std::vector<int> a = {1, 5, 7, 1, 1, 7, 5, 5, 5, 1, 3};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablicê ujemn¹ z duplikatami
TEST(TestMergeSort, Test_9) {
	std::vector<int> a = {-6, -6, -9, -2, -2, -6, -9, -9, -2, -8};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablicê z liczbami ujemnymi, dodatnimi oraz duplikatami
TEST(TestMergeSort, Test_10) {
	std::vector<int> a = {-7, 5, -9, 2, -7, -9, 2, 2, 5, -5, -2, 4, -7};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablicê zawieraj¹c¹ tylko dwa elementy w kolejnoœci rosn¹cej
TEST(TestMergeSort, Test_11) {
	std::vector<int> a = {12, 369};
	std::vector<int> b = a;
	mergesort t(a);
	EXPECT_EQ(b, a);
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje du¿¹ tablicê zawieraj¹c¹ ponad 100 elementów
TEST(TestMergeSort, Test_12) {
	std::vector<int> a = {32, 28, 84, 53, 52, 38, 7, 51, 64, 69, 58, 18, 57, 21, 12, 20, 36, 3, 90, 97, 5, 46, 100, 70, 61, 86, 59, 2, 85, 17, 14, 55, 22, 1, 74, 75, 23, 93, 50, 11, 26, 66, 96, 48, 92, 37, 8, 88, 73, 98, 29, 49, 83, 42, 68, 13, 24, 40, 63, 65, 47, 79, 15, 54, 16, 89, 41, 43, 95, 60, 72, 30, 81, 62, 78, 71, 10, 67, 91, 6, 4, 87, 45, 44, 82, 27, 39, 77, 33, 9, 35, 80, 34, 19, 56, 99, 31, 76, 25, 94};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje du¿¹ tablicê zawieraj¹c¹ ponad 100 elementów, z liczbami ujemnymi, dodatnimi, oraz duplikatami
TEST(TestMergeSort, Test_13) {
	std::vector<int> a = {58, 24, -52, 16, -23, 67, 81, 39, 69, -11, 65, -6, -62, -42, 66, -20, 15, 100, -35, -41, 52, -74, -7, 15, 85, -29, 68, 8, -74, -13, 77, -57, 79, 58, 41, 16, 53, 4, -3, 77, -72, -31, 96, 7, -47, -37, -99, -64, -39, -68, 63, 55, 80, -85, -88, -40, 19, 100, -86, 69, 2, -81, 41, -58, 91, -44, -91, -30, 28, 38, -15, 29, 54, 62, -3, 25, 97, 89, -39, 71, -29, 89, -88, -52, -98, -59, -5, -51, -73, 17, 25, 90, 99, -97, 70, -73, -79, 44, -69, -75};
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}

/// @brief Test który sprawdza, czy algorytm poprawnie sortuje tablicê zawieraj¹c¹ 50 losowych elementów, z liczbami ujemnymi, dodatnimi oraz duplikatami
TEST(TestMergeSort, Test_14) {
	std::vector<int> a;
	srand(time(0));
	for (int i = 0; i < 50; i++) {
		a.push_back((rand() % 32767) - 16383);
	}
	mergesort t(a);
	for (int i = 1; i < a.size(); i++) {
		EXPECT_GE(a[i], a[i - 1]);
	}
}