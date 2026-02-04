#include "logic.h"


bool check_even(long long number) {
	number = number < 0 ? -number : number;


	int count = 0, even_count = 0;

	while (number > 0) {

		int digit = number % 10;

		if (digit != 0 && digit % 2 == 0) {
			even_count++;
		}

		count++;
		number /= 10;
	}



	return even_count > count - even_count;
}