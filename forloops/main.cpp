#include <iostream>

using namespace std;

int main()
{
    /*int num[6] = {5,6,2,1,4,7};
    for(int i=0; i<6; i++) {

        cout << "This is pop up numbers: " << i << endl;
    }*/
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
