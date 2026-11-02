#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Roll
{
public:
    int roll;
    string classs;
    string name;
    int attended = 0;

    void accept(int x)
    {
        cout << "Student no. " << x << endl;
        cout << "Enter the Roll No.: ";
        cin >> roll;
        cout << "Enter the Class:";
        cin >> classs;

        cout << "Enter the Name:";
        cin.ignore();
        getline(cin, name);
    }

    void display()
    {
        cout << setw(15) << left << classs
             << setw(15) << left << roll
             << setw(15) << left << name << endl;
    }
};

int main()
{
    Roll a[20];
    int i, ch, N = 0, temproll, flag, A = 0, count = 0, tempattended, check = 0;
    string tempclasss;

    do
    {
        cout << "\nMenu\n1.Accept\n2.Display\n3.Feed\n4.Display Feed\n5.Search(Using Linear Search)\n6.Search(Using Binary Search)\n7.Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the Total No. of Students you are going to Enter: "; // I made changes and removed the extra object 'b'...
            cin >> N;
            for (i = 0; i < N; i++)
            {
                a[i].accept(i + 1);
            }

            break;

        case 2:
            cout << setw(15) << left << "Class" // It will display 'a', as we are going to perform operation on 'a' only...
                 << setw(15) << left << "Roll no"
                 << setw(10) << right << "Name" << endl;

            cout << setfill('-') << setw(65) << "" << setfill(' ') << endl;

            for (i = 0; i < N; i++)
            {
                a[i].display();
            }

            break;

        case 3:

            cout << "Enter the Total No. of Students who Attended:";
            cin >> A;

            for (i = 0; i < A; i++)
            {
                flag = 1;

                cout << "Student no. " << i + 1 << endl;

                cout << "Enter the Roll No.: ";
                cin >> temproll;
                cout << "Enter the Class:";
                cin.ignore();
                getline(cin, tempclasss);
                cout << endl;

                for (int j = 0; j < N; j++)
                {
                    if (a[j].roll == temproll && (a[j].classs == tempclasss)) // it will check if student is in data base or not...
                    {
                        a[j].attended = 1; // if yes then it will change the attended variable...
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    cout << " Student Not in Database\n";
                }
            }

            break;

        case 4:

            cout << "\nYour Feed is:\n";

            cout << setw(15) << left << "Class"
                 << setw(15) << left << "Roll no" << endl;

            cout << setfill('-') << setw(65) << "" << setfill(' ') << endl;

            for (i = 0; i < N; i++)
            {
                if (a[i].attended == 1)
                {
                    a[i].display();
                }
            }

            break;

        case 5:

            cout << "Enter the Roll no. of student You want to Search:";
            cin >> temproll;
            cout << "Enter the Class of Student:";
            cin.ignore();
            cin >> tempclasss;
            flag = 1;
            check = 0; // it will check if the student we are searching is in our 'a' or not...
            for (i = 0; i < N; i++)

            {
                if (temproll == a[i].roll && (a[i].classs == tempclasss))

                {
                    if (a[i].attended == 1)
                    {
                        check = 1;
                        cout << "Student Has Attended the Program\n";
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                cout << "Nope student Didnt Attend\n";
            }
            else if (check == 0)
            {
                cout << "\nStudent Didn't found in database\n";
            }

            break;

        case 6:
            int low, mid, high;

            for (i = 0; i < N; i++) // sorting the Array of Objects
            {
                for (int j = 0; j < N - 1; j++)
                {
                    if (a[j].roll > a[j + 1].roll)
                    {
                        temproll = a[j].roll;
                        a[j].roll = a[j + 1].roll;
                        a[j + 1].roll = temproll;

                        tempclasss = a[j].classs;
                        a[j].classs = a[j + 1].classs;
                        a[j + 1].classs = tempclasss;

                        tempattended = a[j].attended; // swapping the attended var. as well...
                        a[j].attended = a[j + 1].attended;
                        a[j + 1].attended = tempattended;
                    }
                }
            }

            cout << "\nYour Sorted Feed is:\n";
            for (i = 0; i < A; i++)
            {
                cout << setw(15) << left << "Class"
                     << setw(15) << left << "Roll no" << endl;

                cout << setfill('-') << setw(65) << "" << setfill(' ') << endl;

                for (i = 0; i < N; i++)
                {
                    if (a[i].attended == 1)
                    {

                        a[i].display();
                    }
                }
            }

            high = N - 1;
            low = 0;
            mid = (low + high) / 2;

            flag = 0;

            cout << "Enter the Roll no. of student You want to Search:";
            cin >> temproll;
            cout << "Enter the Class of Student:";
            cin >> tempclasss;

            check = 0;

            while (low <= high)
            {
                if (temproll == a[mid].roll && (a[mid].classs == tempclasss))
                {
                    if (a[mid].attended == 1)
                    {
                        cout << "Student Has Attended the Program\n";
                        flag = 1;
                        check = 1; // same use, i commented out in case 5 earlier...
                        break;
                    }
                }
                else if (temproll > a[mid].roll)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
                mid = (low + high) / 2;
            }
            if (flag == 0)
            {
                cout << "\nStudent Didn't Attend the Program\n";
            }
            else if (check == 0)
            {
                cout << "\nStudent Didn't found in database\n";
            }

            break;

        case 7:
            break;

        default:
            cout << "Wrong Choice...\n";
            break;
        }

    } while (ch != 7);

    return 0;
}