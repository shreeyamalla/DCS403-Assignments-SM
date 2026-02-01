#include <iostream>
using namespace std;

//------------------📌 1. Basics of 2D Arrays ----------------------------

// Q1. Input and Display a 3×3 Matrix

// int main() {
//     int a[3][3];
//     cout << "Enter 9 elements: ";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> a[i][j];
//         }
//     }
//     cout << "Matrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Q2. Sum of All Elements in a 2×3 Array

// int main() {
//     int a[2][3] = {{1,2,3},{4,5,6}};
//     int sum = 0;

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             sum += a[i][j];
//         }
//     }
//     cout << "Sum (2x3 array) = " << sum;
// }

//------------------📌 2. Row-wise and Column-wise Processing ----------------------------

// Q3. Print Row-wise and Column-wise Sums

// int main() {
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     for (int i = 0; i < 3; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < 3; j++) {
//             rowSum += a[i][j];
//         }
//         cout << "Row " << i+1 << " sum = " << rowSum << endl;
//     }

//     for (int j = 0; j < 3; j++) {
//         int colSum = 0;
//         for (int i = 0; i < 3; i++) {
//             colSum += a[i][j];
//         }
//         cout << "Column " << j+1 << " sum = " << colSum << endl;
//     }
// }

// Q4. Find Largest Element in Each Row

// int main() {
//     int a[3][3];

//     cout << "Enter matrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         int max = a[i][0];
//         for (int j = 1; j < 3; j++) {
//             if (a[i][j] > max) {
//                 max = a[i][j];
//             }
//         }
//         cout << "Max in row " << i+1 << " = " << max << endl;
//     }
// }

//------------------📌 3. Matrix-Level Computations ----------------------------

// Q5. Transpose of a Matrix

// int main() {
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     cout << "Transpose:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << a[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

// Q6. Matrix Addition

// int main() {
//     int A[2][2] = {{1,2},{3,4}};
//     int B[2][2] = {{5,6},{7,8}};
//     int C[2][2];

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }

//     cout << "Result:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Q7. Matrix Multiplication (2×3 × 3×2)

// int main() {
//     int A[2][3] = {{1,2,3},{4,5,6}};
//     int B[3][2] = {{7,8},{9,10},{11,12}};
//     int C[2][2] = {0};

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             for (int k = 0; k < 3; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     cout << "Result matrix:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Q8. Passing a 2D Array to a Function

// void printMatrix(int a[][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     printMatrix(a);
// }

// Q9. Check if a Matrix is Symmetric

// int main() {
//     int a[3][3];
//     bool symmetric = true;

//     cout << "Enter matrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (a[i][j] != a[j][i]) {
//                 symmetric = false;
//                 break;
//             }
//         }
//     }

//     if (symmetric)
//         cout << "Matrix is symmetric";
//     else
//         cout << "Matrix is not symmetric";
// }

//------------------📌 4. Additional 2D Manipulation Tasks (For Practice, Not Part of Your Assignments!) ----------------------------

// Q10. Reverse Each Row of a Matrix

// int main(){
//     int a[2][3] = {{1,2,3},{4,5,6}};

//     for (int i = 0; i < 2; i++) {
//         int start = 0, end = 2;

//         while (start < end) {
//             int temp = a[i][start];
//             a[i][start] = a[i][end];
//             a[i][end] = temp;

//             start++;
//             end--;
//         }
//     }
//     cout << "Reversed rows:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Q11. Reverse Each Column of a Matrix

// int main() {
//     int a[3][2] = {{1,2},{3,4},{5,6}};

//     for (int j = 0; j < 2; j++) {
//         int top = 0, bottom = 2;

//         while (top < bottom) {
//             int temp = a[top][j];
//             a[top][j] = a[bottom][j];
//             a[bottom][j] = temp;

//             top++;
//             bottom--;
//         }
//     }
//     cout << "Reversed columns:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Q12. Print Boundary Elements of a Matrix

int main() {
    int n = 3;
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Boundary elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << a[i][j] << " ";
            }
        }
    }
}


