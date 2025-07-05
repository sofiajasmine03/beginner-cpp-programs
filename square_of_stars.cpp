// Program: Square of Stars
// Description: This program prints a square of stars of size 'n × n' based on user input.
// Input Example: 4
/* Output Example: ****
                   ****
                   ****
                   ****
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
