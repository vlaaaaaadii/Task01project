#include "logic.h"



int get_max(long long number) {
	int max = 0;

	while (number > 0) {
		int digit = number % 10;

		if (digit > max) {
			max = digit;
		}

		number /= 10;
	}




	return max;
}
int get_min(long long number) {
	int min = 9;

	while (number > 0) {
		int digit = number % 10;

		if (digit < min) {
			min = digit;
		}

		number /= 10;
	}


	return min;
}