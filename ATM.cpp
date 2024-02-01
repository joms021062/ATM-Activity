#include<iostream>

using namespace std;

int main() {

	int input;
	char choice, cont;

	do {
		cout << "=============================\n";
		cout << "          WELCOME!            ";
		cout << "\n=============================";
		cout << "\n           Menu            \n";
		cout << "1. Deposit" << endl;
		cout << "2. Withdraw" << endl;
		cout << "4. Exit" << endl;
		cout << "=============================";
		cout << "\nEnter your choice: ";
			cin >> choice;

		switch (choice) {
		case '1':
			cout << "\nEnter value to Deposit: ";
			cin >> input;
			break;

		case '2':
			cout << "\nEnter value to withdraw: ";
			cin >> input;
			break;

		case '4':
			cout << "\nExiting... " << endl;
			break;

		default:
			cout << "\nInvalid Choice. Please Try Again." << endl;
		}

		if (choice != '4') {
			cout << "\nDo you want another transaction?[y/n]:";
			cin >> cont;
		}

	} while (choice != '4' && cont == 'y');

	return 0;

}
