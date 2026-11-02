#include<iostream>
using namespace std;
class a{
int a;
};
class b:public a{
    int c;
};
class c: public a{
    int d;
};
class d:public b,public c{
    
};
int main(){
     d obj1;
     obj1 b::a=10;
}
