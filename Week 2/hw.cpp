#include <iostream>
using namespace std;

int main() {

// 5
/*  int month, year, days;

    cout << "enter month: ";
    cin >> month;
    cout << "enter year: ";
    cin >> year;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            days = 29;
        } else {
            days = 28;
        }
        cout << "February " << year << " has " << days << " days.";
    }

    else if (month == 4 || month == 6 || month == 9 || month == 11) {

        if (month == 4) cout << "April ";
        else if (month == 6) cout << "June ";
        else if (month == 9) cout << "September ";
        else if (month == 11) cout << "November ";

        cout << year << " has 30 days.";
    }

    else {

        if (month == 1) cout << "January ";
        else if (month == 3) cout << "March ";
        else if (month == 5) cout << "May ";
        else if (month == 7) cout << "July ";
        else if (month == 8) cout << "August ";
        else if (month == 10) cout << "October ";
        else if (month == 12) cout << "December ";

        cout << year << " has 31 days.";
    }

    return 0;
*/

// 6
/*  double sum = 0;
    
    for(int i = 1; i <= 97; i += 2){
        sum += double(i) / (i + 2);
    }
    
    cout << "sum of series: " << sum;
*/

// 7
    int numStudents;
    double score, highest = 0;
    
    cout << "enter number of students: ";
    cin >> numStudents;
    
    for(int i = 1; i <= numStudents; i++){
        cout << "enter score for student " << i << ": ";
        cin >> score;
        if(score > highest){
            highest = score;
        }
    }
    
    cout << "highest score: " << highest;
} 
