#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "------Switch Statement------" << endl;
    cout << "|1.                                       |" << endl;
    cout << "|2.                                       |" << endl;
    cout << "|3.                                       |" << endl;
    cout << "|4. Check whether they are equal or not !!|" << endl;
    cout << "|5.                                       |" << endl;
    cout << "|6.                                       |" << endl;
    cout << "|7.                                       |" << endl;
    cout << "|8.                                       |" << endl;
    cout << "-------- End of List ------" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {

    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:
        int a, b;
        cout << "Check whether they are equal or not !!" << endl;
        cout << "Enter 1st number: ";
        cin >> a;
        cout << "Enter 2nd number: ";
        cin >> b;
        if (a == b)
        {
            cout << "a is equal to b ✅" << endl;
        }
        else if (a > b)
        {
            cout << "a is greater than b 🚫" << endl;
        }
        else if (a < b)
        {
            cout << "a is less than b 🚫" << endl;
        }
        else
        {
            cout << "Invalid input" << endl;
        }

        break;
    case 5:

        break;
    case 6:

        break;
    default:
        cout << "Wrong Input Enter" << endl;
    }

    return 0;
}