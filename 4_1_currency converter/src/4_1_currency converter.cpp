//============================================================================
// Name        : 4_1_currency.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Currency converter
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double amount = 0;
	char currency;
	cout << "Please enter an amount followed by a currency (y, e or p):"
			<< endl;
	cin >> amount >> currency;
	switch (currency) {
	case 'y':
		cout << amount * 4 << endl;
		break;
	case 'e':
		cout << amount * 8 << endl;
		break;
	case 'p':
		cout << amount * 16 << endl;
		break;
	default:
		cout << "You didn;t enter a valid currency." << endl;
	}
	return 0;
}
