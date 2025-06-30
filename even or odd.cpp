// Program: Even and Odd Numbers
// Description: Takes a number n as input from the user and prints whether each number from 1 to n is even or odd. 
// Input Example: 6
// Output Example: Even and Odd numbers from 1 to 6:
                    1 is Odd
                    2 is Even
                    3 is Odd
                    4 is Even
                    5 is Odd
                    6 is Even

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Even and Odd numbers from 1 to " << n << ":\n";

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " is Even" << endl;
        } else {
            cout << i << " is Odd" << endl;
        }
    }

    return 0;
}
