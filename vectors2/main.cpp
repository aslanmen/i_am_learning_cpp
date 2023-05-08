#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector <int> vector1{};
  vector <int> vector2{};
  
  vector1.push_back(10);
  vector1.push_back(20);
  cout<<"\nvector1"<<endl;
  cout<<vector1.at(0)<<endl;
  cout<<vector1.at(1)<<endl;
  cout<<vector1.size()<<endl;
  
  vector2.push_back(100);
  vector2.push_back(200);
  cout<<"\nvector2"<<endl;
  cout<<vector2.at(0)<<endl;
  cout<<vector2.at(1)<<endl;
  cout<<vector2.size()<<endl;
  
  vector <vector<int>> vector2d{};
  
  vector2d.push_back(vector1);
  vector2d.push_back(vector2);
  cout<<"\nvector_2d"<<endl;
  cout<<vector2d.at(0).at(0)<<" "<<vector2d.at(0).at(1)<<endl;
  cout<<vector2d.at(1).at(0)<<" "<<vector2d.at(1).at(1)<<endl;
  
  vector1.at(0)=1000;
  
  cout<<"\nvector_2d"<<endl;
  cout<<vector2d.at(0).at(0)<<" "<<vector2d.at(0).at(1)<<endl;
  cout<<vector2d.at(1).at(0)<<" "<<vector2d.at(1).at(1)<<endl;
  
  cout<<"\nvector1"<<endl;
  cout<<vector1.at(0)<<endl;
  cout<<vector1.at(1)<<endl;
  
}