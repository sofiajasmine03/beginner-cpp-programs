// Program: Factorial Calculator
// Description: Gives factorial of a number.
// Input Example: 5
// Output Example: 120

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter a Number: " << endl;
    cin >> n;
    if (n<0){
        cout << "Factorial not possible for negative number." << endl;
    }
    else if (n==0 or n==1){
        cout << "Factorial is 1" << endl;

    }
    else {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    cout << "Factorial of " << n << " is " << result;
    }



    return 0;
}
