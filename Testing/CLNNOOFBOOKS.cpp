#include<iostream>
using namespace std;
class NBook{
public:
int cost;
char Title;
  void accept(){
    cout<<"Enter Books Title ";
    cin>>Title;
    cout<<"Enter Book Cost";
    cin>>cost;

  }
  void display(){
    cout<<"Book Title Is"<<Title<<"\n";
    cout<<"Book Price Is "<<cost<<"\n";
    cout<<"obj1[i]";
  }

};
int main(){
    int n,i,ch,j,count=0;
    NBook obj[10],obj1[10];
    cout<<"Enter How Many User:";
    cin>>n;
    do
    {
        cout << "Enter Your Choice:\n"
             << "1. Accept New book\n"
             << "2. Display\n"
             <<"3.sort\n"
             << "4. Displaying Books Less than 500\n"
             << "5. Books Having Price Greater Than 500 \n"
             <<"6.Display the Dublicate\n "
             << "7. Exit\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            for(i=0;i<n;i++){
                obj[i].accept();
            }
            break;
        case 2:
        for(i=0;i<n;i++){
           obj[i].display();
         
        }
        case 3:
        for(i = 0;i<n;i++){
          if(obj[i].cost >=500){
            obj1[i];
          }
        }
        
        break;
    
        case 4:
        cout<<"Exiting....";
        
        default:
            break;
        }
    } while (i!= 3);
    return 0;
    
}