#include <iostream>

using namespace std;

void add(int inputs)
{
    double result = 0;

    for (int i = 0; i < inputs; i++) {
        double number;
        cout << "Enter number to be added: ";
        cin >> number;
        cout << "Number taken: " << number << endl;;
        result += number;
        cout << "Answer: " << result << endl;
    }
    cout << "Final answer is: " << result << endl;
}

void subtract(int inputs)
{
    double orig_number;
    cout << "Enter the number to be subtracted from: ";
    cin >> orig_number;
    for (int i = 0; i < inputs; i++) {
        double number;
        cout << "Enter number to subtract from " << orig_number << ": ";
        cin >> number;
        cout << "Number taken: " << number << endl;
        orig_number -= number;
        cout << "Answer: " << orig_number << endl;
    }
    double result = orig_number;
    cout << "Final answer is: " << result << endl;
}

void multiply(int inputs)
{
    double result = 1;
    for (int i = 0; i < inputs; i++) {
        double number;
        cout << "Enter number to multiply with: ";
        cin >> number;
        cout << "Number taken: " << number << endl;;
        result = result * number;
        cout << "Answer: " << result << endl;
    }
    cout << "Final answer is: " << result << endl;
}

void divide(int inputs)
{
    double orig_number;
    cout << "Enter the number to be divided: ";
    cin >> orig_number;
    for (int i = 0; i < inputs; i++) {
        double number;
        cout << "Enter number to divide " << orig_number << " with: ";
        cin >> number;
        cout << "Number taken: " << number << endl;;
        orig_number = orig_number / number;
        cout << "Answer: " << orig_number << endl;


    }
    double result = orig_number;
    cout << "Final answer is: " << result << endl;
}

int main()
{
    while (true) {
        int op;
        cout << "1 for addition. 2 for subtraction. 3 for multiplication. 4 for division" << endl;
        cout << "Select number for operation (1-4): ";

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cin >> op;

        if (op < 1 || op > 4) {
            cout << "Wrong input." << endl;
        } else {
            int numValues;
            cout << "Enter the number of values: ";
            cin >> numValues;

            if (op == 1) {
                add(numValues);
            } else if (op == 2) {
                subtract(numValues);
            } else if (op == 3) {
                multiply(numValues);
            } else if (op == 4) {
                divide(numValues);
            }
        }
    }
}