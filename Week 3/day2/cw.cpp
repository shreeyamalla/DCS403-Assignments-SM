#include <iostream>
using namespace std;

// 🧩 1. Defining and Calling a Function
// int add(int a, int b){
//     return(a+b);
// }
// int main(){   
//     int sum = add(3,4);
//     cout << sum;
// }

// 🧩 2. Void Functions
// void greet(){
//     cout << "Hello, welcome to C++ functions!";
// }
// int main(){
//     greet();
// }

// 🧩 3. Passing Arguments by Value
// void square(int n){
//     cout << "square: " << n*n << endl;
// }
// int main(){
//     int x = 5;
//     square(x);
//     cout << "num: " << x;
// }

// 🧩 4. Overloading Functions
// double area(double r){
//     return 3.14*r*r;
// }
// double area (double l, double b){
//     return l*b;
// }
// int main(){
//     cout << "area of a circle: " << area(5) << endl;
//     cout << "area of a rectangle: " << area(3.4, 6.7) << endl;
// }

//🧩 5. Default Arguments
// int power(int base, int exponent=2){
//     int res = 1;
//     for(int i=1; i <= exponent; i++){
//         res *= base;
//     }
//     return res;
// }
// int main(){
//     cout << "power(not defined): " << power(5) << endl;
//     cout << "power(defined): " << power(2,3) << endl;
// }

//🧩 6. Inline Functions
// inline int cube(int n){
//     return n*n*n;
// }
// int main(){
//     cout << "cube: " << cube(3);
// }

//🧩 7. Static, Global, and Static Local Variables
// int globalVar = 0;
// void test() {
//     int n = 0;
//     n++;
//     static int count = 0;
//     count++;
//     globalVar++;
//     cout << n  << " " << count << " " << globalVar << endl;
// }
// int main() {
//     test();  
//     test();  
//     test();  
// }

//🧩 8. Passing Arguments by Reference
// void swapValues(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int x=5, y=10;
//     swapValues(x,y);
//     cout << "a(after swapped): " << x << ", " << "b(after swapped):" << y;
// }

//🧩 9. Constant Reference Parameters
void display(const string &msg){
    cout << msg;
}
int main(){
    string text = "Hi, I am me!";
    display(text);
}