// Program: Sum of Three Numbers
// Description: Takes three integers as input and prints their sum.
// Input Example: 10 20 30
// Output Example: Sum=60

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int sum = a + b + c;
    cout << "Sum = " << sum << endl;
    return 0;
}
