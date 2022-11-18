#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Check whether they are equal or not !!" << endl;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    if (a==b){
        cout << "a is equal to b ✅" << endl;
    }
    else if (a > b){
        cout << "a is greater than b 🚫" << endl;
    }
    else if (a < b) {
        cout << "a is less than b 🚫" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }
    return 0;
}