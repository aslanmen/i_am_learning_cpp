#include <iostream>

using namespace std;

int main(){
    int point{};
    cout<<"Enter your point on the exam(0-100): ";
    cin>>point;
    char letter_grade{};
    if(point>=0 || point<=100){
      if(point>=90)
         letter_grade='A';
      else if(point>=80)
          letter_grade='B';
      else if(point>=70)
          letter_grade='C';
      else if(point>=60)
          letter_grade='D';
      else
          letter_grade='F';
      cout<<"Your grade is :"<<letter_grade<<endl;
      if(letter_grade=='F')
          cout<<"Sorry,you must repeat the class"<<endl;
      else
          cout<<"Congrats!"<<endl;
    }
    else{
        cout<<"sorry "<<point<< " is not range"<<endl;
        
    }
    return 0;   
}