#include<iostream>
using namespace std;

int areal, breal;
int aimaginary, bimaginary;

class Complex {
public:
    int tempreal;       
    int tempimaginary; 
    Complex() {
        tempreal = 0;
        tempimaginary = 0;
    }
    void accept(){
    cout << "Enter the real part of complex number a: ";
    cin >> areal;
    cout << "Enter the imaginary part of complex number a: ";
    cin >> aimaginary;

    cout << "Enter the real part of complex number b: ";
    cin >> breal;
    cout << "Enter the imaginary part of complex number b: ";
    cin >> bimaginary;
    }

    void addition() {
        tempreal = areal + breal;
        tempimaginary = aimaginary + bimaginary;
        cout << "Addition result: " << tempreal << " + " << tempimaginary << "i\n";
    }

    void subtraction() {
        tempreal = areal - breal;
        tempimaginary = aimaginary - bimaginary;
        cout << "Subtraction result: " << tempreal << " + " << tempimaginary << "i\n";
    }
    void multiplicastion(){
        tempreal = (areal * breal)-(aimaginary * bimaginary);
        tempimaginary =(areal*bimaginary)+(aimaginary*breal);
        cout<<"Multiplicastion is "<<tempreal<<"*"<<tempimaginary<<"i\n";
    }
    void division(){
    float dinometer = (areal * areal)-(aimaginary*bimaginary);
    if(dinometer == 0){
        cout<<"Denometer is Zero Is not calculatable";
        return;
    }
    tempreal = (areal*breal)+(aimaginary*bimaginary);
    tempimaginary = (areal*bimaginary)-(breal*aimaginary);

    cout<<"Division is:"<<tempreal<<"/"<<tempimaginary<<"i\n";
    }
};


int main() {
   Complex comp;
    int ch;
    do
    {
        cout<<"Menu\n1.Accept\n2.addition\n3.subtraction\n4.multiplicastion\n5.divison\n6.Exit\n";
        cin>>ch;
        switch(ch){
        case 1:
         comp.accept();
         break;
         case 2:
         comp.addition();
         break;
         case 3:
         comp.subtraction();
         break;
         case 4:
         comp.division();
         case 5:
         cout<<"Exiting.....";
         default: {
            cout<<"Wrong choice";
         }
        }

    } while (ch !=6);

    return 0;
}
