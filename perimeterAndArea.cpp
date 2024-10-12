#include <iostream>
using namespace std;


class Circle
{
  public:
   float radius;
   float pi;
  

   void operations(){
    cout<<"Press 'A' to calculate area and 'P' to calculate perimeter: ";
   }
   void findArea(){
    float i;
    

    cout<<"Enter the value of radius: ";
    cin>>radius;

    cout<<"Enter the value of pi: ";
    cin>>pi;

    i= radius*radius*pi;
    
    cout<<"Area of the Circle: "<<i;
   }

   void findPerimeter(){
    float j;
    
    cout<<"Enter the value of radius: ";
    cin>>radius;

    cout<<"Enter the value of pi: ";
    cin>>pi;

    j= 2*pi*radius;

    cout<<"Perimeter of the Circle: "<<j;
   }
};
int main(){
 Circle a;
 
 char x;
 
  k: a.operations();
 cin>>x;

 if(x=='A'){
  a.findArea();
  
 }
 else if(x=='P'){
  a.findPerimeter();
  
 }
 else{
  cout<<"Please try again. ";
  goto k;
 }
 

 
 return 0;;
}