#include <iostream>

using namespace std;

int main(){
    cout <<"Enter an amount in cents :"<<endl;
    int cent{},dollars{},quarters{},dimes{},nickels{},pennies{};
    cin>>cent;
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    dollars=cent/dollar_value;
    quarters=(cent-dollars*dollar_value)/quarter_value;
    dimes=(cent-dollars*dollar_value-quarters*quarter_value)/dime_value;
    nickels=(cent-dollars*dollar_value-quarters*quarter_value-dimes*dime_value)/nickel_value;
    pennies=(cent-dollars*dollar_value-quarters*quarter_value-dimes*dime_value-nickels*nickel_value);
    cout<<"dollar :"<<dollars<<"\nquarter :"<<quarters<<
    "\ndime :"<<dimes<<"\nnickel :"<<nickels<<"\npenny :"<<pennies<<endl;
    return 0;   
}