#include <iostream>
using namespace std;
// Recursive Function : calls itself to solve smaller instances of itself
/* Base Case: defines when to stop recursion
   Recursive case: breaks prblm into simpler subproblems 
*/

// Q1. Find factorial using recusive function

// long factorial(int n){
//     if(n == 0 || n == 1){
//         return 1; // base case 
//     }
//     return n * factorial (n-1); // recursive case
// }

// int main(){
//     int num;
//     cout << "enter a positive input: ";
//     cin >> num;

//     if(num < 0){
//         cout << "No factorial for negative number!";
//     }else{
//         cout << "Factorial of " << num << " is " << factorial(num);
//     }
// }

// Q. Sum of numbers : 3=3+2+1
    // int sum(int n){
    //     if(n == 1){
    //         return 1;
    //     }else{
    //         return n + sum(n-1);
    //     }
    // }
    // int main(){
    //     int num;
    //     cout << "enter a number: ";
    //     cin >> num;
    //     cout << "Sum is " << sum(num);
    // }

// Why recusive function not preferred for fibonacci series? - too much repeated calculations 

// Recursive Helper Functions 
/* secondary recursive functions 
    this helps to manage additional parameters/ simplify the main call
    eg: palindrome check
*/

// Towers of Hanoi - solve for next class
void hanoi(int n, char source, char aux, char dest){
    if(n == 1){
        cout << "Move disk from" << source << " to " << dest;
    }

}

// Eight Queens: recursive & backtrack 
// Benefits of tail recursion, define, uses, does it have any benefits? - next class
