//bk
#include<iostream>
using namespace std;
int size;

class person{
string name,gender,address;
int age;
double contactNumber,id;
    public:
void acceptInfo() {
        cout << "\n--- Person Details ---\n";
        cout << "Enter Name:" ;
        cin>> name;
        cout << "Enteer Age: " ;
        cin>>age;
        cout << "Enter Gender: " ;
        cin>>gender;
        cout << "Enter Contact: " ;
        cin>>contactNumber;
        cout << "Enter Address: ";
        cin>>address;
        cout << "Enter ID Number: ";
        cin>>id;

}
  
};

class Doctur{
    public:
    void doctur(){
        cout<<"In this Hospital Number of docuter is"<<size<<"\n";
        cout<<"Info Of Doctur\n";
    }
};
class Nurce{
    void nurce(){
        cout<<"In this Hospital Number of Nurce is"<<size<<"\n";
        cout<<"Info Of Nurce\n";
    }

};
class AdministrativeStaff:public person ,public Doctur,public Nurce{
    void Post(){
    string Worrk_Type;
    cout<<"Enter Your Type Of work";
    cin>>Worrk_Type;
       }
     void administrativeStaff(){
        cout<<"In this Hospital Number of Nurce is"<<size<<"\n";
        cout<<"Info Of Nurce\n";
    }


};
int main(){
    AdministrativeStaff obj;
    

}
