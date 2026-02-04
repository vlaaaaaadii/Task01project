#include "logic.h"

int likes(int n, int d) {

	
	int result = 0;

	for (int i = 1; i <= d; i++) {

		
		 result += n;
		 cout << "Day " << i << ": " << result << endl;

	}




	return result;
}