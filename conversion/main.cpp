#include <iostream>

using namespace std;

int main(){
    int total{};
    int num1{},num2{},num3{};
    const int count{3};
    cout<<"enter 3 integers separated by spaces :";
    cin>>num1>>num2>>num3;
    total=num1+num2+num3;
    double average{0.0};
    average=static_cast<double>(total)/count;
    //average=(double)total/count; old-style
    cout<<average<<endl;
    cout<<17.0/3;
    return 0;   
}