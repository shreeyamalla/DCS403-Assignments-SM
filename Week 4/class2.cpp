#include <iostream>
using namespace std;

// For Binary Search, we need Sorting Arrays
/* Two types: Selection sort & Bubble sort
Selection sort: starts from 1st element
                repeatedly finds the smallest element from the unsorted part of the array
                and, puts it to 1st position
                only works for small datasets
                Time complexity: O(n^2) (as 2 for loops)
Bubble sort: two elements are compared and the smallest one of the two is swapped 
            Best time complexity: O(n) [already sorted: already in order]
            Average/Worst: O(n^2)
*/

// Selection Sort
    // int main() {
    //     int arr[] = {64, 25, 12, 22, 11};
    //     int n = 5;

    //     for(int i = 0; i < n - 1; i++) {
    //         int minIndex = i;
    //         for(int j = i + 1; j < n; j++) {
    //             if(arr[j] < arr[minIndex])
    //                 minIndex = j;
    //         }
    //         swap(arr[i], arr[minIndex]);
    //     }

    //     cout << "Sorted array: ";
    //     for(int i = 0; i < n; i++)
    //         cout << arr[i] << " ";

    //     return 0;
    // }

// Bubble Sort
//     int main() {
//         int arr[] = {64, 25, 12, 22, 11};
//         int n = 5;

//         for(int i = 0; i < n - 1; i++) {
//             bool swapped = false;
//             for(int j = 0; j < n - i - 1; j++) {  
//                 if(arr[j] > arr[j + 1]) {
//                     swap(arr[j], arr[j + 1]);
//                     swapped = true;
//                 }
//             }
//             if(!swapped)  // no swaps means array is already sorted
//                 break;
//         }

//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

// Two-Dimensional Arrays
/* int mtarix[3][4] - 3 rows, 4 columns --> [(0,1,0,2), (4,5,6,7), (....)]
    int matrix[][3] - can skip to declare rows 
    int matrix[i][j] - formula (to calc): (i * columns) + j
*/
// 3d Array : [2][2][2] - [(0,2) (1,2) (3,4) (4,5)] --> just 2 nums 

void printMatrix (const int m[][4], int rows){
    for (int i = 0; i < rows ;i++){
        for (int j = 0; j<4; j++){
            cout << m[i][j]<< " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix [3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    printMatrix(matrix,3);
}

  