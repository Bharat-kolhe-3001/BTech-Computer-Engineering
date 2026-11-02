#include<iostream>
using namespace std;
template<class T,class T1>
class sub{
    public:
    void add(T b,T1 c){
      T1 r;
      r=b+c;
      cout<<"Result is "<<r;
    }
};
int main(){
    sub<int,float>obj;
     obj.add(10.10,30.30);
}