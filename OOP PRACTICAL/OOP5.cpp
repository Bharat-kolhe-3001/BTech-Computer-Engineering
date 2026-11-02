#include<iostream>
using namespace std;
class temp{
    public:
   virtual void accept(int a){
 cout<<"It'S Virtual function";
    }
};
class sup{
    void accept(int b){
        cout<<"It'S Not Virual Function";
    }
};
int main(){
    temp out;
    out.accept(10);
}