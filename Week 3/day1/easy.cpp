#include <iostream>
using namespace std;

int main(){

// 1 
    // int num, sum = 0;
    // cout << "enter a natural number: ";
    // cin >> num;
    // for(int i=1; i <= num; i++){
    //     sum += i;
    // }
    // cout << "Sum from 1 upto " << num << " is " << sum;

// 2 
    int num, mul;
    int i = 1;
    cout << "enter a num (for multiplication table): ";
    cin >> num;
    do{
        mul = num * i;
        cout << num << " x " << i << " = " << mul << endl;
        i++;
    }while (i <= 10);
    
}