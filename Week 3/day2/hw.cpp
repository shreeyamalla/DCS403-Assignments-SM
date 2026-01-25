#include <iostream>
using namespace std;

int main(){

//-------------------- EASY LEVEL --------------------------------

// 1. Solid Square of Stars
    // int n;
    // cout << "enter a num for rows & column: "; 
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

//----------------------------- MEDIUM LEVEL ----------------------------

// 2. Inverted Right-Angled Triangle
    // int n;
    // cout << "enter a num (inverted right-angled triangle):";
    // cin >> n;

    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

// 3. Number Triangle
    // int n;
    // cout << "enter a num ( for number triangle): ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

// 4. Alphabet Pattern
    // int n;
    // cout << "enter a num (for alphabet pattern): ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << char('A' + j - 1) << " ";
    //     }
    //     cout << endl;
    // }

//------------------- HARD LEVEL -----------------------------------

// 5. Full Pyramid
    // int n;
    // cout << "enter a num (for full star pyramid): ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     for (int s = 1; s <= n - i; s++)
    //         cout << " ";

    //     for (int j = 1; j <= 2*i - 1; j++)
    //         cout << "*";

    //     cout << endl;
    // }

// 6. Inverted Pyramid
    // int n;
    // cout << "enter a num (for inverted star pyramid): ";
    // cin >> n;

    // for (int i = n; i >= 1; i--) {
    //     for (int s = 1; s <= n - i; s++)
    //         cout << " ";

    //     for (int j = 1; j <= 2*i - 1; j++)
    //         cout << "*";

    //     cout << endl;
    // }

// 7. Diamond Pattern
    // int n;
    // cout << "enter a num (for diamond pattern): ";
    // cin >> n;

    // // Upper half
    // for (int i = 1; i <= n; i++) {
    //     for (int s = 1; s <= n - i; s++)
    //         cout << " ";
    //     for (int j = 1; j <= 2*i - 1; j++)
    //         cout << "*";
    //     cout << endl;
    // }

    // // Lower half
    // for (int i = n - 1; i >= 1; i--) {
    //     for (int s = 1; s <= n - i; s++)
    //         cout << " ";
    //     for (int j = 1; j <= 2*i - 1; j++)
    //         cout << "*";
    //     cout << endl;
    // }

// 8. ⭐ Hollow Square Pattern
    // int n;
    // cout << "enter a num (for hollow square pattern): ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n || j == 1 || j == n)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

// 9. Pascal’s Triangle
int n;
cout << "enter a num (for Pascal's triangle): ";
cin >> n;

for (int i = 0; i < n; i++) {
    int num = 1;

    for (int s = 1; s <= n - i; s++)
        cout << " ";

    for (int j = 0; j <= i; j++) {
        cout << num << " ";
        num = num * (i - j) / (j + 1);
    }
    cout << endl;
}

}