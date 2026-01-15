#include <iostream>
#include <ctime>

using namespace std;

int main(){

/*  bool b1 = 0;
    bool b2 = 198;     //any non zero is true
    bool b3 = 435.98;
    bool b4 = 345.09;

    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;
    cout << "b3 = " << b3 << endl;
    cout << "b4 = " << b4 << endl;
*/

/*  float num;
    cout << "enter a num: ";
    cin >> num;
    if (num > 0){
        cout << "positive number";
    }
*/

/*  float a,b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    if(a > b){
        cout << a << " is greater";
    }else{
        cout << b << " is greater";
    }
*/

/*  float marks;
    cout << "enter your marks: ";
    cin >> marks;
    if(marks >= 80){
        cout << "A";
    }else if(marks >= 60){
        cout << "B";
    }else if(marks >= 40){
        cout << "C";
    }else{
        cout << "F";
    }
*/

/*  float marks;
    int category;
    cout << "enter your marks: ";
    cin >> marks;

    category = marks / 20;   
    switch (category){
        case 5:   // 100
        case 4:   // 80–99
            cout << "A";
            break;

        case 3:   // 60–79
            cout << "B";
            break;

        case 2:   // 40–59
            cout << "C";
            break;

        default:  // below 40
            cout << "F";
    }
    return 0;
*/

/*  int num;
    cout << "enter a number: ";
    cin >> num;

    if(num > 0){
        if (num % 2 == 0){
            cout << "positive and even";
        }else{
            cout << "positve and odd";
        }
    }else if (num < 0){
        cout << "negative";
    }else{
        cout << "zero";
    }
*/

/*  srand(time(0));
    int number = rand()% 10; //range 0-9
    cout << number;
*/

    int year;
    cout << "enter the year: ";
    cin >> year;
    if(year % 4 == 0 || year % 100 ==! 0 || year % 400 == 0){
        cout << year << " is a leap year!";
    }else{
        cout << year << " is not a leap year.";
    }

}