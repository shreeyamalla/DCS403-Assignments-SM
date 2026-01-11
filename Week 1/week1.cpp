#include <iostream>
#include <cmath>
using namespace std;

/* int main() {
    double x1, y1, x2, y2, distance;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    distance = pow((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1), 0.5);

    cout << "Distance between the two points is: " << distance << endl;

    return 0;
} */

//---------------------Extra questions (given by prof)------------------------------

/* int main() {
    int baseSalary;
    const double bonusPercentage = 15.0;
    double bonusAmount;
    double totalSalary;
    
    cout << "Base Salary: ";
    cin >> baseSalary;
    
    bonusAmount = baseSalary * (bonusPercentage / 100.0);
    
    totalSalary = baseSalary + bonusAmount;
    
    cout << "Total Salary: " << totalSalary << endl;
    
    return 0;
} */

//2nd ques

int main() {
    const double factor1 = 9.0;
    const double factor2 = 5.0;
    const double offset = 32.0;
    double celsius;
    double fahrenheit;
    
    cout << "Celsius: ";
    cin >> celsius;
    
    fahrenheit = (celsius * factor1 / factor2) + offset;
    cout << "Fahrenheit: " << fahrenheit << endl;
    
    return 0;
}

