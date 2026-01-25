#include <iostream>
using namespace std;

int main(){

// 6
    // int rows;
    // cout << "enter num of rows: ";
    // cin >> rows;

    // for(int i=1; i <= rows; i++){
    //     for(int j=1; j <= i; j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

// 7
    // for(int i=1; i <= 10; i++){
    //     cout << "Table of: " << i << endl;
    //     for(int j=1; j <= 10; j++){
    //         cout << i << " x " << j << " = " << i*j << endl; 
    //     }
    //     cout << endl;
    // }

// 8
    int num, count=1;
    cout << "enter a number(for rows): ";
    cin >> num;

    for(int i=1; i <= num; i++){
        for(int j=1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}