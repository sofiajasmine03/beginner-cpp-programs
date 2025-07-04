// Program: Prime Number Checker
// Description: Gives 'true' if a number is prime and 'false' otherwise.
// Input Example: 9
// Output Exampe: False

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool is_prime;
    cout << "Enter a Number: " << endl;
    cin >> n;

    if(n <= 1) {
        cout << "False" << endl;
    } else {
        is_prime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                is_prime = false;
                break;
            }
        }
        cout << (is_prime ? "True" : "False") << endl;
    }

    return 0;
}
