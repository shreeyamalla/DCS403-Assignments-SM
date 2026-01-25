#include <iostream>
using namespace std;
// FUNCTIONS 

// Pass By Value : fxn receives a separate copy of arguments value & manipulates it, original value 5 remains same
/* 
void increment(int num){
    num++;
    cout << "inside function: " << num << endl;
}
int main(){
    int x=5;
    increment(x);
    cout << "outside function: " << x << endl;
} 
*/

// Pass By Reference : original value reference is passed & changes reflected in original value itself
/*
void increment(int& num){
    num++;
    cout << "inside function: " << num << endl;
}
int main(){
    int x=5;
    increment(x);
    cout << "outside function: " << x << endl;
}
*/

// OVERLOADING FUNCTIONS: multi fxns with same name but diff parameters(type/list).
/*
float add(float a, float b){      //which one among float & double get improtance from compiler?
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int main(){
    cout << add(2.5, 3.5) << endl;
    cout << add(2.5, 4.2) << endl;
}
*/

// Function prototype , why is it imp? 
// Usually, in a diff file which is called along with header fxn at first, so errors are mitigated

// Deafult Arguments ; when argument not provided, default value(provided at the paramenter list) is used 
// the defined value needs to be at the last of parameter list
// double interest(double amount, double rate = 0.05){}

// Inline functions : used for smaller fxns, no need to fxn call, used to minimize fxn call overhead 

// LOCA, GLOBAL, STATIC LOCAL VARIABLES
int globalCount = 0;

void showCounter(){
    int localCount = 0;
    static int count = 0; //mix of local&global, scope within fxn but multi times fxn call huda retains ita value
    localCount++;
    count++;
    globalCount++;
    cout << " local count: " << localCount << " static count: " << count << " global count: " << globalCount << endl;
}
int main(){
    showCounter();
    showCounter();
}
