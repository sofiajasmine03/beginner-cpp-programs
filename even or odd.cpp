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
