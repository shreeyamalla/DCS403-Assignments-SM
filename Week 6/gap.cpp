#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (m % n == 0) {
        return n;  
    } else {
        return gcd(n, m % n);  
    }
}

int main() {
    int result1 = gcd(24, 16);
    cout << "gcd(24, 16) = " << result1 << endl;
    
    int result2 = gcd(255, 25);
    cout << "gcd(255, 25) = " << result2 << endl;
    
    return 0;
}
