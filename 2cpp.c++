#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum, sub, mul;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = a + b;
    sub = a - b;
    mul = a * b;

    cout << "Sum = " << sum << endl;
    cout << "Subtraction = " << sub << endl;
    cout << "Multiplication = " << mul << endl;

    return 0;
}
