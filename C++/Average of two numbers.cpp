#include <iostream>

using namespace std;
int main()
{
    float a, b, sum, avg;
    cout << "Enter 1st numbers: ";
    cin >> a;
    cout << "Enter two numbers: ";
    cin >> b;
    sum = (a + b);
    cout << "Sum of two numbers:" << sum << endl;
    avg = sum / 2;
    cout << "Average of two numbers is: " << avg << endl;
    return 0;
}