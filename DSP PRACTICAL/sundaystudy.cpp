#include<iostream>
using namespace std;
class base{
    protected:

    string name = "Bharat";
    int rollno = 71;
    void data(){
        
    }
  
};

class derived: public base{
    public:
     derived(){
        cout<<"Name is "<<name<<"\n";
        cout<<"Roll no is "<<rollno<< endl;
      
     }
    
};
class ok : public derived{
    public:
    int call;
    ok(){
 cout<<"Name is "<<name<<"\n";
        cout<<"Roll no is "<<rollno<< endl;
    }
  
};

int main(){
    ok obj2;


    
return 0;
}
