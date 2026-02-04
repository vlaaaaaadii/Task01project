#include "logic.h"

int main() {

	long long number;

	cout << "input number: ";
	cin >> number;

	int max = get_max(number);
	int min = get_min(number);

	system("cls");
	cout << "max " << number << " is " << max << ".\n";
	cout << "min " << number << " is " << min << ".\n";

	system("pause");

	return 0;
}