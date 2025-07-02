// Program: Print 1 to n
// Description: Prints 1 to n using a loop.
// Input Example: 5
/* Output Example: 1
                   2
                   3
                   4
                   5
*/



#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a Number: " << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        cout << i << endl;
    }
    return 0;
}
