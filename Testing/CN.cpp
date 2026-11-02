#include<iostream>
using namespace std;

class book
{
    public:
    int price;
    string title;
   
    void accept()
    {
     
            cout<<"Enter Title of Book: ";
            cin>>title;
            cout<<"Enter Price  of Book: ";
            cin>>price;
       
    }
    void display()
    {
        cout<<"|"<<title<<"\t|"<<price<<endl;
    }


};

int main()
{   book b[10],a[10];
    int ch,i,n,count=0;
    
    do
    {
        cout << "Enter Your Choice:\n"
             << "1. Accept New Lot\n"
             << "2. Display\n"
             << "3. Displaying Books Less than 500\n"
             << "4. Books Having Price Greater Than 500 \n"
             << "6. Exit\n";
        cin >> ch;
     switch (ch)
     {
     case 1:
        {cout<<"Enter the Lot Size: ";
        cin>>n;
        
        for ( i = 0; i < n; i++)
        {
             b[i].accept();
        }
             
        break;
        }
        case 2: 
        {    count=0;    
             cout<<"|Title\t"<<"|Price"<<endl;
                for ( i = 0; i < n; i++)
                {
                  b[i].display();
                }
           
                 for ( i = 0; i < n; i++)
             {   

                if (b[i].price>=500)               //Copying in Another Array :Books Less than 500 rupees
            {
                a[i].price=b[i].price;
                a[i].title=b[i].title;
            }
                else{ count+=1;}                  //Counting Count of Books Greater than 500 rupees 



            for ( int j = 0; j < n-1; j++)
          {
                if (b[j].price<b[j+1].price)

                    {int temp;
                    temp=b[j].price;
                    b[j].price=b[j+1].price;
                    b[j+1].price=temp;   
                    string temp2;
                    temp2=b[j].title;
                    b[j].title=b[j+1].title;
                    b[j+1].title=temp2;           
                    }
        
          }
    
        }
        cout<<"Books Arranged As per Decending Order: "<<endl;
        cout<<"|Title\t"<<"|Price"<<endl;
           for ( i = 0; i < n; i++)
           {
            b[i].display();
           }
           
        }
        break;

        case 3:
            {    cout<<"Cost of Book less than 500: "<<endl;
                 for ( i = 0; i < n; i++)
                {
                    b[i].display();
                }
            }
         
        break;

      case 4:
            {cout<<"Books Having Price Greater Than 500 Are: "<<count<<endl<<endl;       
            }break;
            
         
      case 5:
           for ( i = 0; i < n-1; i++)
           {
               for ( int j = 0; j <= n; j++)
               {    if (i==j)
               {                
               }
               
                   else if (b[i].title==b[j].title)
                    {
                        for (int k = j; k < n; k++)
                        {
                            b[k].title==b[k+1].title;
                            b[k].price==b[k+1].price;
                        }
                        
                    }
                    
               }
               
           }
           
      break;
        
     default:
        break;
     }

    } while (ch!=6);
    
    

  
 return 0;
}