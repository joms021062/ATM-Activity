#include<iostream>

using namespace std;

int main() {

	int stored = 1000;
	int input;
	char choice;
	char cont;

	do {
		cout << "\nMenu\n";
		cout << "1. Deposit" << endl;
		cout << "2. Withdraw" << endl;
		cout << "3. Exit" << endl;
		cout << "\nEnter your choice: ";0
		cin >> choice;

		switch (choice) {
		case '1':
			cout << "Enter value to Deposit: ";
			cin >> input;
			stored += input;
			cout << "Your balance is: " << stored << endl;
			break;

		case '2':
			cout << "Enter value to withdraw: ";
			cin >> input;
			stored -= input;
			cout << "Your balance is: " << stored << endl;
			break;

		case '3':
			cout << "Exiting... " << endl;
			break;

		default:
			cout << "Invalid Choice. Please Enter Again." << endl;
		}
		
		if (choice != '3') {
			cout << "\nDo you want another transaction?[y/n]:";
			cin >> cont;
		}

	} while (choice != '3' && cont == 'y');

	return 0;

}
