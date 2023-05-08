#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*vector <int> point {100,80,65};
    cout <<point[0]<<endl;
    cin>>point.at(2);
    cout<<endl;
    cout<<point[0]<<endl<<point[1]<<endl<<point[2]<<endl;
    int new_point{0};
    cin>>new_point;
    point.push_back(new_point);
    cout<<point[3]<<endl;
    cout<<"size: "<<point.size();*/
    cout<<"\n------------------------------------------\n";
    vector <vector<int>> ratings{
        {10,20,30,40},{15,25,35,45},{50,60,70,80}
    };
    cout<<ratings[0][0]<<endl;
    cout<<ratings[0][1]<<endl;
    cout<<ratings[1][3]<<endl;
    cout<<ratings[2][2]<<endl;
    cout<<"-------------------------------\n";
    cin>>ratings.at(0).at(0);
    cin>>ratings.at(1).at(3);
    cin>>ratings.at(2).at(2);
    cout<<"-------------------------------\n";
    cout<<ratings[0][0]<<endl;
    cout<<ratings[1][3]<<endl;
    cout<<ratings[2][2]<<endl;
    return 0;   
}