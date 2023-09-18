# Multiples
Multiplication calculator
#c++
#include <iostream>

using namespace std;

int main()
{
    
    cout << "Multiples of a chosen number" << endl;
    int num1;
    int num2;
    cout << "Enter your number" << endl;
    cin >> num2;
    for(int i= 0;i<13;i++){
        cout << i <<" * " << num2 << flush;
        cout << " = " << i * num2 << endl;
    }

    return 0;
}
