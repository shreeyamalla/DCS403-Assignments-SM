#include <iostream>
using namespace std;

int main(){

// 3
    // int num, rev=0;
    // cout << "enter a string of numbers: ";
    // cin >> num;

    // while(num !=0){
    //     rev = rev * 10 + (num % 10);    // % extracts last digit of num: if rev=4, 4*10+3,rev=43... 
    //     num = num / 10;                // removes last digit of num
    // }
    // cout << rev; 

// 4
    // int num, count= 0;
    // cout << "enter a string of numbers(for digits): ";
    // cin >> num;
    // do{
    //     count++;
    //     num = num / 10;
    // }while(num != 0);
    // cout << "Number of digits: " << count;

// 5
    int num;
    int fact = 1;
    cout << "enter a number(for factorial): ";
    cin >> num;

    for(int i=1; i <= num; i++){
        fact = fact * i;
    }
    cout << fact;
}