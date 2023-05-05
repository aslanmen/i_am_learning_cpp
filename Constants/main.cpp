#include <iostream>

using namespace std;

int main(){
    cout <<"Hello,welcome to Aslan's Carpet Cleaning Service"<<endl;
    cout <<"\nHow many small rooms would you like clened?"<<endl;
    
    int room_small{0};
    cin >>room_small;
    
    cout <<"\nHow many large rooms would you like clened?"<<endl;
    int room_large{0};
    cin >>room_large;
    
    const double price_per_room_large{35};
    const double price_per_room_small{25};
    const double sales_tax{0.06};
    const int estimate_expiry{30};//days
    
    cout <<"\nEstimate for carpet cleaning service"<<endl;
    cout <<"Number of rooms small: "<<room_small<<endl;
    cout <<"Price per room small: $"<<price_per_room_small<<endl;
    cout <<"Number of rooms large: "<<room_large<<endl;
    cout <<"Price per room large: $"<<price_per_room_large<<endl;
    cout <<"Cost: $"<<(price_per_room_small*room_small)+(price_per_room_large*room_large)<<endl;
    cout <<"Tax: $"<<((price_per_room_small*room_small)+(price_per_room_large*room_large))*sales_tax<<endl;
    cout <<"================================================="<<endl;
    cout <<"Total estimate: $"<<((price_per_room_small*room_small)+(price_per_room_large*room_large))+((price_per_room_small*room_small)+(price_per_room_large*room_large))*sales_tax<<endl;
    cout <<"This estimate is valid for "<<estimate_expiry<<" days"<<endl<<endl;
    
    return 0;   
}