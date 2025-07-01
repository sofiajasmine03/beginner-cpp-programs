// Program: Maximum of Two Numbers
// Determines the greater of two numbers.
// Input Example: 3 7
// Output Example: Greatest Number is 7

#include <iostream>

using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter 1st Number" << endl;
    cin >> a;
    cout << "Enter 2nd Number" << endl;
    cin >> b;
    if (a>b){
        cout << "Greatest Number is " << a;
    }
    else if (a<b){
        cout << "Greatest Number is " << b;
    }
    else{
        cout << "Both are equal";
    }

    return 0;
}
