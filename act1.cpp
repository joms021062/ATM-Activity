#include <iostream>
#include <cmath>
#include <cstdlib> 

using namespace std;

int main() {
    int num1, num2, result;
    char choice;
    char cont;

    do {
        cout << "\n  Menu\n";
        cout << "\n1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == '7') {
            cout << "Exiting...\n";
            break;
        }

        cout << "\nEnter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
        case '1':
            result = num1 + num2;
            break;
        case '2':
            result = num1 - num2;
            break;
        case '3':
            result = num1 * num2;
            break;
        case '4':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                continue;
            }
            result = num1 / num2;
            break;
        case '5':
            result = num1 % num2;
            break;
        case '6':
            result = pow(num1, num2);
            break;
        default:
            cout << "Invalid choice! Please choose a valid operation.";
            continue;
        }
        cout << "\nThe result is: " << result << endl;

        cout << "\nDo you wish to continue? [y/n]: ";
        cin >> cont;

    } while (cont == 'y');

    return 0;
}
