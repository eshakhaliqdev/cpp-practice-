#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    // Prompt the user for input
    cout << "Enter a calculation (e.g., 5 + 3): ";
    cin >> num1 >> op >> num2;

    // Perform the calculation based on the operator
    switch(op) {
        case '+': 
            cout << "=" << num1 + num2 << endl; 
            break;
        case '-': 
            cout << "=" << num1 - num2 << endl; 
            break;
        case '*': 
            cout << "=" << num1 * num2 << endl; 
            break;
        case '/': 
            // Simple check to prevent dividing by zero
            if(num2 != 0)
                cout << "=" << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default: 
            cout << "Error: Invalid operator!" << endl; 
            break;
    }

    return 0;
}
