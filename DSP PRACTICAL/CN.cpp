#include <iostream>
using namespace std;
class NBook
{
public:
    int cost;
    string title;

    void accept()
    {
        cout << "Enter the Title of book: ";
        cin >> title;
        cout << "Enter the book cost: ";
        cin >> cost;
        cout << "\n\n";
    }
    void display()
    {
        cout << "You Enter book title Is: " << title << "\n";
        cout << "Your Enter book cost Is: " << cost << "\n\n";
    }
};
int main()
{
    int ch, n, i, j, count = 0;
    NBook temp;
    NBook obj[10], obj1[10];
    cout << "Enter how many user:";
    cin >> n;
    do
    {
        cout << "\nMenu\n1.Accept\n2.Display\n3.Sort\n4.Displaying Books Less than 500\n5.Books Having Price Greater Than 500 \n6.Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                obj[i].accept();
}
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                obj[i].display();
            }

            break;
        case 3:
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(obj[i].cost < obj[j].cost){
                    temp = obj[i];
                    obj[i] = obj[j];
                    obj[j]=temp;

                }
            }
        }
            break;
        case 4:
        {
            
            i = 0;
            j = 0;

            while (i < n)
            {
                if (obj[i].cost < 500)
                {
                    obj1[j].title = obj[i].title;
                    obj1[j].cost = obj[i].cost;
                    j++;
                }
                else
                {
                    count++;
                }
                i++;
            }
            for (i = 0; i < n; i++)
            {
                obj1[i].display();
            }
        
          
        }
        break;
        case 5:
        {
            cout << "Number of BOOK Above $500 Rupees : " << count << endl;
        }
        case 6:
        {
            cout << "Exiting...... Thank You So Much";
        }
        default:
            cout << "Invalid Choice Enter Again......\n ";
        }
    } while (ch != 6);
}