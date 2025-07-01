// Program: Simple Calculator
// Description: Performs addition, subtraction, multiplication, or division based on user input.
// Input Example: 2 3 +
// Output Example: 5


#include <iostream>



using namespace std;

int main(){
    int n1;
    int n2;
    char s;

    cout << "Enter the 1st Number: " << endl;
    cin >> n1;
    cout << "Enter the 2nd Number: " << endl;
    cin >> n2;
    cout << "Enter the operator to be used: " <<endl;
    cin >> s;
    if (s=='+'){
        cout << "n1+n2= " << n1+n2 << endl;
    }
    else if (s=='-'){
            cout << "n1-n2= " << n1-n2 << endl;

    }
    else if (s=='*'){
        cout << "n1*n2= " << n1*n2 << endl;

    }
    else if (s=='/'){
        cout << "n1/n2= " << n1/n2 << endl;
    }
    else{
        cout << "Error" << endl;
    }
    return 0;
}
