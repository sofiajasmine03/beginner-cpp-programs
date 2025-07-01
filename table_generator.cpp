// Program: Multiplication Table Generator
// Description: Prints the multiplication table of a number from 1 to 10.
// Input Example: 5
/* Output Example: 1x5=5
                   2x5=10
                   3x5=15
                   4x5=20
                   5x5=25
                   6x5=30
                   7x5=35
                   8x5=40
                   9x5=45
                   10x5=50
*/


#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Enter Number" << endl;
    cin >> num;
    for (int i=1;i<=10;i++){
        cout << i << "x" << num << "="<< i*num << endl;
    }
    return 0;
}
