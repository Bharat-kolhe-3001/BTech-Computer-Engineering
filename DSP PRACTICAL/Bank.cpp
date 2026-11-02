#include<iostream>
using namespace std;
class Bank
{
    public:
    char name[20];
    long Account_no;
    float Current_Balance;
    float Withdraw_amount;


void accept(){
    cout<<"Enter Your Name:";
    cin>>name;
     cout<<"Enter Your Account no:";
    cin>>Account_no;
    cout<<"Enter Current Balace:";
    cin>>Current_Balance;
     cout<<"Enter Your Withdraw Amount:";
    cin>>Withdraw_amount;
}
void display(){
 cout<<"Your Name is:"<<name;
 cout<<"\nYour Account no is:"<<Account_no;
 cout<<"\nYour Current Balance is:"<<Current_Balance;
 cout<<"\nYour Withdraw Balance is:"<<Withdraw_amount;
}
int Withdraw(){
    cout<<"Enter Deposite amount:";
    cin>>Withdraw_amount;
    cout<<"Diposite amount"<<Withdraw_amount;
    Current_Balance-=Withdraw_amount;
    return Current_Balance;
}
};
int main(){
    int i;
   
    Bank b1;
    do
    {
    cout<<"\n1.Accept Info\n2.Display Info\n3.Withdraw amount\n4.Exit\n";
    cin>>i;
    
    switch (i)
    {
    case 1:
        b1.accept();
        break;
     case 2:
        b1.display();
        break;
    case 3:
        b1.Withdraw();
        break;
    
    default:
    cout<<"Wrong Choice";
    break;
    } 
 } while (i!= 4);
 return 0;
}