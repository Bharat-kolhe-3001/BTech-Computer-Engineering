#include<iostream>
using namespace std;
class base{
    public:
  virtual void display() = 0;
};
class derived:public base{
    public:
    void display(){
        cout<<"This is Derived class";
    }
};
int main()
{
    base *ptr;
    derived obj;  
    
      (*ptr).display();
}