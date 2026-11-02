#include<iostream>
using namespace std;
class complex{
      float a_real,a_imaginery;
     float b_real,b_imaginery;
     float temp_real;
     float temp_Imaginary;

     public:
    void accept_First(){

      cout<<"Enter a real part";
      cin>>a_real;
       cout<<"Enter a imaginery part";
      cin>>a_imaginery;
    }
    void accept_second(){
       cout<<"Enter b real part";
      cin>>b_real;
       cout<<"Enter b imaginery part";
      cin>>b_imaginery;
      
    }
    complex operator +(complex& c){
      complex temp;
      temp_real=a_real+b_real;
      temp_Imaginary =b_real+b_imaginery;
      return temp;
    }
    void dispaly(){
        cout<<real 
    }
};
int main(){
complex result;
complex obj1,obj2;

cout<<"First complex enter";
  obj1.accept_First();
  cout<<"Enter second complex number";
  obj2.accept_second();

 result = obj1+obj2;
 result.display();
}
