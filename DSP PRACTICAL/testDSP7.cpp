#include <iostream>
using namespace std;
class pizza
{
    int front = -1;
    int rear = -1;
    int queue[20];
    void Calculate_price()
    {
    }

    void Equeue(int det)
    {
        if (rear == 19)
        {
            cout << "Order is full";
        }
        else
        {
            front = 0;
            rear++;
            queue[rear] = det;
        }
    }
    void Dqueue()
    {
        if (rear == -1)
        {
            cout << "No Order Found";
        }
        else
        {

            cout << "cancel The order" << queue[front];
            front++;
        }
    }
};
int main()
{
    int ch;
    int size;
    int price;
    int N, i;
    int Quantity;

    pizza obj1[20];
    cout << "How Many Buy The Order";
    cin >> N;

    do
    {
        cout << "Meanu\n1.Accept\n2.Accept Delevery\n3.Delete Delvery\n4.Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (i = 0; i < N; i++)
            {
                cout << "Enter Size of pizza" << "like:-Small/nMedium\nLarge";
                obj1.Equeue();
                cout << "How Many pizza you want";
                cin >> Quantity;
                if (size == 'Small')
                {
                    price = Quantity * 50;
                }
                else if (size == 'Medium')
                {
                    price = Quantity * 75;
                }
                else
                {
                    price = Quantity * 100;
                }
                cout << "Price Of Your Order" << price;
            }
            break;
        case 2:
            obj1.Equeue();
            break;
        default:
            break;
        }
    } while (ch != 4);
}
/*#include<iostream>
using namespace std;

#define MAX 5

int front=-1;
int rear=-1;


class pizza{
    public:
          int amount;
          string size;
          float price;

float pricing(string size,int amount){
    if (size=="large")
    {
        price=amount*100;
    }
    else if (size=="medium")
    {
        price=amount*75;
    }
    else{
        price=amount*50;
    }
    return price;

}


int Accept()
{
    if (rear==MAX-1)
            {
              cout<<"Orders Are Full!!!\n";
            }
    else if (rear==-1 && front==-1)
            {
                rear=0;
                front=0;
                cout<<"Enter the size: ";
                cin>>size;
                cout<<"Enter the Amount: ";
                cin>>amount;
                price=pricing(size,amount);

            }
    else
            {
                rear++;
                cout<<"Enter the size: ";
                cin>>size;
                cout<<"Enter the Amount: ";
                cin>>amount;
                price=pricing(size,amount);

            }
            return 0;
}



void Deliver()
{
    if (front==-1)
    {
        cout<<"All orders are delivered\n";
    }
    else if (front==rear)
    {
        cout<<"Order deliverd and Moeny has been recieved: "<<price<<endl;
        front=-1;
        rear=-1;
    }
    else
    {
        cout<<"Order deliverd and Moeny has been recieved: "<<price<<endl;
        front++;
    }

}




};




int main()
{   int i=0;
    int j=0;
    int temp=0;
    pizza M[10];
    int ch,n;

    do
    {   cout<<"Menu\n1.Accept Order\n2.Deliver Order\n3.Display\n4.Exit\n";
        cin>>ch;

        switch (ch)
        {
        case 1:
             M[i].Accept();
             i++;
            if (rear==-1 && front==-1)
            {
                i=0;
            }

            break;
        case 2:

             M[j].Deliver();
             j++;
             if (rear==-1 && front==-1){
                j=0;
             }


            break;
        case 3:
                if(front==-1)
                    {
                        cout<<"No orders at the moment!!!\n";
                    }
                    else
                    {
                    for (int i = front; i <= rear; i++)
                    {
                    cout<<"Amount is: "<<M[i].amount<<"\nPrice is: "<<M[i].price<<"\nSize is: "<<M[i].size<<endl;
                    }
                    }
             break;
        case 4:
            break;
        default:
            cout<<"Wrong choice\n";
            break;
        }

    } while (ch!=4);




    return 0;
}*/