#include<iostream>
using namespace std;
template<typename T,class T1>
class suppose{
public:
void add(T a,T1 b){
   cout<<"Answer is"<<a+b;
}

};
    
int main(){
   suppose<int,float>obj;
   obj.add(1020,10.20);
}