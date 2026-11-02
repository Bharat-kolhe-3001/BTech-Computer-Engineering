#include <iostream>
using namespace std;

class WeatherReport {
    int day_of_month;
    double hightemp, lowtemp, amount_rain, amount_snow;

public:
  
    WeatherReport() {
        day_of_month = 99;
        hightemp = 999;
        lowtemp = -999;
        amount_rain = 0;
        amount_snow = 0;
    }

    inline void enterData() {
        cout << "Enter Day of the Month: ";
        cin >> day_of_month;
        cout << "Enter High Temperature: ";
        cin >> hightemp;
        cout << "Enter Low Temperature: ";
        cin >> lowtemp;
        cout << "Enter Amount of Rainfall: ";
        cin >> amount_rain;
        cout << "Enter Amount of Snowfall: ";
        cin >> amount_snow;
    }

    inline void displayReport() {
        cout << day_of_month << "\t"    
             << hightemp << "\t\t"
             << lowtemp << "\t\t"
             << amount_snow << "\t\t"
             << amount_rain << endl;
    }

    friend void calculateAverages(WeatherReport reports[], int count);
};

void calculateAverages(WeatherReport reports[], int count) {
    double totalHigh = 0, totalLow = 0, totalRain = 0, totalSnow = 0;

    for (int i = 0; i < count; i++) {
        totalHigh += reports[i].hightemp;
        totalLow += reports[i].lowtemp;
        totalRain += reports[i].amount_rain;
        totalSnow += reports[i].amount_snow;
    }

    cout << "\nAverage Report:\n";
    cout << "Average High Temp: " << totalHigh / count << endl;
    cout << "Average Low Temp: " << totalLow / count << endl;
    cout << "Average Rainfall: " << totalRain / count << endl;
    cout << "Average Snowfall: " << totalSnow / count << endl;
}

int main() {
    int count = 0, choice;
    WeatherReport reports[30]; 

    do {
        cout << "\n--- Weather Report Menu ---\n";
        cout << "1. Enter Data\n";
        cout << "2. Display Report\n";
        cout << "3. Display Averages\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (count < 30) {
                cout << "\nEnter data for Day " << count + 1 << ":\n";
                reports[count].enterData();
                count++;
            } else {
                cout << "You have already entered data for all 30 days!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo data entered yet!\n";
            } else {
                cout << "\nWeather Report:\n";
                cout << "Day\tHigh_Temp\tLow_Temp\tAmt_Snow\tAmt_Rain\n";
                for (int i = 0; i < count; i++) {
                    reports[i].displayReport();
                }
            }
            break;

        case 3:
            if (count == 0) {
                cout << "\nNo data entered yet!\n";
            } else {
                calculateAverages(reports, count);
            }
            break;

        case 4:
            cout << "\nExiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice. Try Again!\n";
        }
    } while (choice != 4);

    return 0;
}
