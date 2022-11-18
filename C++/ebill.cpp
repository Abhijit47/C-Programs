#include <iostream>
#include <string>
using namespace std;
using std::string;

int main()
{
    float amt=0;
    float unit, surcharge=0;
    char name[20];
    cout << "Enter customer name: ";
    cin >> name;
    cout << "Enter the number of units consumed: ";
    cin >> unit;
    if(unit <= 100){
        amt =unit * 1.00;
        
        cout << "Amount to be paid: " << "₹ "<< amt;
        cout << "--------------"<<name<<"Bill 📃 --------------"<< endl;
    }
    else if (unit > 100 && unit <= 200) {
        amt = unit * 1.20;
        cout << "Amount to be paid: " << "₹ "<< amt;
    }
    else if (unit > 200 && unit <=400) {
        amt = unit * 1.50;
        cout << "Amount to be paid: " << "₹ "<< amt;
    }
    else if (unit >400 && unit <=600) {
        amt = unit * 1.80;
        cout << "Amount to be paid: " << "₹ "<< amt;
    }
    else if (unit > 600) {
        amt = unit * 2.00;
        cout << "Amount to be paid: " << "₹ "<< amt;
    }
    else {
        cout << "You entered more than 100 units" << endl;
    }
    return 0;
}