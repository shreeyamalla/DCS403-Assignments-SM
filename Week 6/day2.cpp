#include <iostream>
using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = 5;

//     selectionSort(arr, n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {5, 1, 4, 2, 8};
//     int n = 5;

//     bubbleSort(arr, n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = 5;

//     insertionSort(arr, n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


//--------------------RECURSIVE MERGE SORT------------------
// void merge(int arr[], int left, int mid, int right) {
//     int i = left, j = mid + 1, k = 0;
//     int temp[100];

//     while (i <= mid && j <= right) {
//         if (arr[i] <= arr[j])
//             temp[k++] = arr[i++];
//         else
//             temp[k++] = arr[j++];
//     }

//     while (i <= mid) temp[k++] = arr[i++];
//     while (j <= right) temp[k++] = arr[j++];

//     for (int p = 0; p < k; p++)
//         arr[left + p] = temp[p];
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left >= right) return;

//     int mid = (left + right) / 2;
//     mergeSort(arr, left, mid);
//     mergeSort(arr, mid + 1, right);
//     merge(arr, left, mid, right);
// }

// int main() {
//     int arr[] = {38, 27, 43, 3, 9};
//     int n = 5;

//     mergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


//-----------------ITERATIVE MERGE SORT--------------------------
// void merge(int arr[], int l, int m, int r) {
//     int temp[100];
//     int i = l, j = m, k = 0;

//     while (i < m && j <= r) {
//         if (arr[i] <= arr[j]) temp[k++] = arr[i++];
//         else temp[k++] = arr[j++];
//     }

//     while (i < m) temp[k++] = arr[i++];
//     while (j <= r) temp[k++] = arr[j++];

//     for (int p = 0; p < k; p++)
//         arr[l + p] = temp[p];
// }

// void iterativeMergeSort(int arr[], int n) {
//     for (int curr = 1; curr < n; curr *= 2) {
//         for (int left = 0; left < n - 1; left += 2 * curr) {
//             int mid = min(left + curr, n);
//             int right = min(left + 2 * curr - 1, n - 1);
//             merge(arr, left, mid, right);
//         }
//     }
// }

// int main() {
//     int arr[] = {38, 27, 43, 3, 9};
//     int n = 5;

//     iterativeMergeSort(arr, n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

//---------------- QUICK SORT ---------------------------
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }

//     int temp = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = temp;

//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int arr[] = {10, 7, 8, 9, 1};
//     int n = 5;

//     quickSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


//-------------------- HEAP SORT --------------------------------
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;

    heapSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
