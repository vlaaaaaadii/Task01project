#include "logic.h"

int main() {
	
	long long num;

	cout << "inpet your number: ";
	cin >> num;

	bool is_more_even = check_even(num);

	string msg = is_more_even ? "Yes" : "No";

	system("cls");
	cout << msg << endl;

	system("pause");

	return 0;
}