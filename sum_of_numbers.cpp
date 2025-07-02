// Program: Sum of First N Natural Numbers
// Description: Gives sum of first n natural numbers.
// Input Example: 10
// Output Example: 55

#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter a Number: " << endl;
    cin >> n;


    int result = 1;
    for (int i = 2; i <= n; i++) {
        result += i;
    }
    cout << "Total sum is " << result;




    return 0;
}
