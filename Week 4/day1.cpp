#include <iostream>
using namespace std;

// int main(){

// 📌 1. Arrays (Basics)
    // int arr[5];
    // cout << "Enter 5 integers:\n";
    // for (int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }
    // cout << "You entered:\n";
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }

// 📌 2. Array Manipulation
    // int n;
    // cout << "Enter number of elements: ";
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    // int max = arr[0];
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    // }
    // cout << "Maximum value = " << max;

// }

// 📌 3. Passing Arrays to Functions
    // int sumArray(int arr[], int size) {
    // int sum = 0;
    // for (int i = 0; i < size; i++) {
    //     sum += arr[i];
    // }
    // return sum;
    // }

    // int main() {
    //     int arr[5] = {1, 2, 3, 4, 5};
    //     cout << "Sum = " << sumArray(arr, 5);
    // }

// 📌 4. Array Searching Algorithms

// Q4. Linear Search

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int key;
//     cout << "Enter number to search: ";
//     cin >> key;

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] == key) {
//             cout << "Found at index " << i;
//             return 0;
//         }
//     }
//     cout << "Not found";
// }

// Q5. Binary Search

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int key;
//     cout << "Enter number to search: ";
//     cin >> key;
//     int low = 0, high = 4;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key) {
//             cout << "Found at index " << mid;
//             return 0;
//         }
//         else if (arr[mid] < key) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     cout << "Not found";
// }

// 📌 5. Array Sorting Algorithms

// Q6. Selection Sort

// int main() {
//     int arr[5] = {64, 25, 12, 22, 11};

//     for (int i = 0; i < 4; i++) {
//         int minIndex = i;

//         for (int j = i + 1; j < 5; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
//     cout << "Sorted array:\n";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }

// Q7. Bubble Sort
// int main() {
//     int arr[5] = {5, 1, 4, 2, 8};

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     cout << "Sorted array:\n";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }