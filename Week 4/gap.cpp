#include <iostream>
using namespace std;

// 3 no. 
double min(double array[], int size) {
    double smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

// rest of the 4 no. 
int main() {
    double numbers[10];
    cout << "Enter ten numbers: ";

    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    cout << "The minimum value is: " << min(numbers, 10) << endl;
}
