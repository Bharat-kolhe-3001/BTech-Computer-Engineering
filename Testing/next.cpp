#include<iostream>
using namespace std;
class vihicle{
    public:
    int milage;
    double price;
    vihicle(){
         milage=0;
         price=0;
    }
    void getvihicle(int m,double p){
        milage=m;
        price=p;

    }
    void dispalybasicinfo(){
        cout<<"Milage is"<<milage;
        cout<<"price is: "<<price;
    }
};
class car: public vihicle{
    public:
    double ownershipcost;
    string warrenty;
    int seating_cap;
    string fueltype;
   car(){
      ownershipcost=0.0;
     warrenty="";
    seating_cap=0;
     fueltype="";
   }
    void getvihicleinfo(double ow,string wa,int seatingcap,string ft){
        ownershipcost=ow;
        warrenty=wa;
        fueltype=ft;
        seating_cap=seatingcap;

    }
    void dispalyvecleinfo(){
        cout<<"Warrenty is"<<warrenty;
        cout<<"ownership cost is:"<<ownershipcost;
        cout<<"fuel type is: "<<fueltype;
        cout<<"seating capcity: "<<seating_cap;
    }
};

class audi:public car{
    public:
    string model;
   audi(){
      model="";
   }
    void getmodel(string m){
     model=m;
    }
   void dispalyaudiinfo(){
    cout<<"Audi info: ";
    cout<<"model is: "<<model;
   }
};
int main(){
    audi audiobj;


    audiobj.getvihicleinfo(10 ,20.1)
}
