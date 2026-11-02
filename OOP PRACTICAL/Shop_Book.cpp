#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;


class NBook
{
public:
int cost,total,N,stock;
    string title,author,publisher;
    void accept() {
        cout << "Enter the Title of the book:";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter the book cost: ";
        cin >> cost;
        cout << "Enter Publisher: ";
        cin >> publisher;
        cout << "Enter stock quantity: ";
        cin >> stock;
        cout << "\n";
    }

    // Function to display the details of a book in a tabular format
    void display() const {
        cout<< setw(20) << left << title
            <<"|"   << setw(20) << left << author
             <<"|"  << setw(10) << left << cost
             <<"|"  << setw(20) << left << publisher
             <<"|"  << setw(10) << right << stock << "\n";
    }
  
    
};

int main()
{
    int ch, N=0, i, j, count,total,newauthor,Quantity;

    NBook temp;
     NBook obj[20];
     string temptitle,tempauthor;
    NBook b1;
    do
    {
        // Display menu options
        cout << "\nMenu\nI.Accept\nII.Display\nIII.Sort\nIV.Buy Book\nV.Exit\n";
        cin >> ch;  // Accept user choice

        switch (ch)
        {
        case 1:
       
            // Case 1: Add new books
            int newBooks;
            cout << "How many books do you want to add? ";
            cin >>N;

            // Accept details for each new book
            for (i = 0; i <N; i++)
            {
                obj[i].accept();
            }
          
            break;

        case 2:
            // Case 2: Display all books
            if(N==0){
                   cout<<"Firstly Enter The Stock: \n";
            }
                  
            else{
                 cout << "\n" << setw(20) << left << "Title"
                       << setw(20) << left << "Author"
                         << setw(10) << left << "Cost"
                         << setw(20) << left << "Publisher"
                         << setw(10) << right << "Stock" << "\n";
                    
                    // Print horizontal line
                    cout << string(80, '-') << "\n";
            for (i = 0; i < N; i++)
            {
                obj[i].display();
            }
            }
             
            
            break;
        case 4:
        cout<<"Enter Book title: ";
        cin>>temptitle;
       
        cout<<"Enter Book Author: ";
        cin>>tempauthor;   
        for(i =0;i<N;i++) {
           if(obj[i].title == temptitle && obj[i].author==tempauthor){
              cout<<"Book is Available\nHow Many Books do You Want: ";
              cin>>Quantity;
              if(obj[i].stock >= Quantity){
                   cout<<"Stock Is Available\n";
                   int c;
                  c=Quantity*obj[i].cost;
                  cout<<"Total Cost Of these Book Is: "<<c<<"\n";
              }
              else{
                cout<<"Not Enough Stock Available \n only Available Stock is :"<<obj[i].stock<<"\n";
              }
              break;
           

           } 
          
        }  
        if(i==N){
            cout<<"Book Not Found";
        }
    break;

        case 3:
            // Case 3: Sort books by cost in descending order
            for (i = 0; i < N - 1; i++)
            {
                for (j = i + 1; j < N; j++)
                {
                    if (obj[i].cost < obj[j].cost)
                    {
                        temp = obj[i];
                        obj[i] = obj[j];
                        obj[j] = temp;  // Swap books to sort
                    }
                }
            }
            cout << "Books sorted by cost (descending order):\n";
            for (i = 0; i < N; i++)
            {
                obj[i].display();  // Display sorted books
            }
            break;

    
        case 5:
            // Case 6: Exit the program
            cout << "Exiting... Thank you!\n";
            break;

        default:
            // Default case: Handle invalid menu options
            cout << "Invalid choice. Please enter again...\n";
        }
    } while (ch != 5);  // Loop until the user chooses to exit
    return 0;
}


   
