#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "binary_insertion_sort.h"


TEST_CASE("Binary insertion sorting works correctly") {
	int flag = 1;

	int array1_size = 1;
	int array2_size = 5;
	int array3_size = 5;
	int array4_size = 5;

	float array1[1] = {};
	float array2[] = { 6, 3.56, 5, 6.66, 12 };
	int   array3[] = { 6, 5, 4, 3, 1 };
	int   array4[] = { 6, 6, 6, 6, 8 };

	binary_insertion_sort(array1, array1_size);
	binary_insertion_sort(array2, array2_size);
	binary_insertion_sort(array3, array3_size);
	binary_insertion_sort(array4, array4_size);


	for (int i = 0; i < array1_size - 1; i++) {
		if (array1[i] > array1[i + 1]) {
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array2_size - 1; i++) {
		if (array2[i] > array2[i + 1]) {
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array3_size - 1; i++) {
		if (array3[i] > array3[i + 1]) {
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array4_size - 1; i++) {
		if (array4[i] > array4[i + 1]) {
			flag = 0;
			break;
		}
	}

	REQUIRE(flag);

}