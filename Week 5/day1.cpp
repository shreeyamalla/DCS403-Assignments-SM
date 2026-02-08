#include <iostream>
using namespace std;

//------------------------------🟢 EASY LEVEL---------------------------

// Q1. Print Numbers from 1 to N (Basic Recursion)
// void num(int n) {
//     if (n == 0)   
//         return;

//     num(n - 1);   
//     cout << n << " ";  
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     num(n);
// }

// Q2. Find Factorial of a Number
// int factorial(int n) {
//     if (n == 0 || n == 1)   // base case
//         return 1;

//     return n * factorial(n - 1);
// }

// int main() {
//     int n;
//     cout << "Enter a number (factorial): ";
//     cin >> n;
//     cout << factorial(n);
// }

//-------------------------🟡 MEDIUM LEVEL---------------------------------

// Q3. Sum of Digits (Recursive)
// int sumDigits(int n) {
//     if (n == 0)
//         return 0;

//     return (n % 10) + sumDigits(n / 10);
// }

// int main() {
//     int n;
//     cout << "Enter a number for sum: ";
//     cin >> n;
//     cout << sumDigits(n);
// }

// Q4. Print All Elements of an Array Using Recursion
// void printArray(int arr[], int size, int index = 0) {
//     if (index == size) 
//         return;  
//     cout << arr[index] << " ";
//     printArray(arr, size, index + 1);  
// }

// int main() {
//     int size;
//     cout << "Enter a number: ";
//     cin >> size;

//     int arr[size];
//     cout << "Input: ";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     cout << "Output: ";
//     printArray(arr, size);
//     return 0;
// }

// Q5. Tail-Recursive Power Function
// int power(int a, int b, int result = 1) {
//     if (b == 0)
//         return result;

//     return power(a, b - 1, result * a);
// }

// int main() {
//     int a, b;
//     cout << "enter two numbers: ";
//     cin >> a >> b;
//     cout << power(a, b);
// }

//-----------------------------🔴 HARD LEVEL------------------------------------

// Q6. Fibonacci Number (Recursive)
// int fib(int n) {
//     if (n <= 1)
//         return n;

//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n;
//     cout << "Enter a fibonacci number: ";
//     cin >> n;
//     cout << fib(n);
// }

// Q7. Tail-Recursive Fibonacci
// int fibTail(int n, int a=0, int b=1) {
//     if (n == 0)
//         return a;

//     return fibTail(n - 1, b, a + b);
// }

// int main() {
//     int n;
//     cout << "Enter a tail-recursive fibonacci number: ";
//     cin >> n;
//     cout << fibTail(n);
// }

// Q8. Reverse a String Using Recursion
// void reverseString(string &s, int start, int end) {
//     if (start >= end)
//         return;

//     char temp = s[start];
//     s[start] = s[end];
//     s[end] = temp;

//     reverseString(s, start + 1, end - 1);
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     reverseString(s, 0, s.length() - 1);
//     cout << s;
// }

// Q9. Tower of Hanoi (3 Pegs)
// void hanoi(int n, char A, char B, char C) {
//     if (n == 1) {
//         cout << "Move disk 1 from " << A << " to " << C << endl;
//         return;
//     }

//     hanoi(n - 1, A, C, B);
//     cout << "Move disk " << n << " from " << A << " to " << C << endl;
//     hanoi(n - 1, B, A, C);
// }

// int main() {
//     int n;
//     cout << "Enter number of disks: ";
//     cin >> n;
//     hanoi(n, 'A', 'B', 'C');
// }

// Q10. Check if a String is Palindrome (Recursive)
bool isPalindrome(string s, int start, int end) {
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}