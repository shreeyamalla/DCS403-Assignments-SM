#include <iostream>
#include <ctime>
using namespace std;
// 1D ARRAY

/*
int main() { 

    // int arr[4] = {10,20,30};
    // std::cout << arr[4];

    // return 0;


// random 6 numbers generation
    // int arr[6];
    // bool used[51] = {false};
    // srand(time(0));

    // for(int i = 0; i < 6; ){
    //     int num = rand() % 50+1;
        
    //     if(!used[num]){
    //         used[num] = true;
    //         arr[i] = num;
    //         i++;
    //     }
    // }
    // for (int i = 0; i < 6; i++) {
    //     cout << arr[i] << endl;
    // }
}
*/

// Passing Arrays inside Functions - the right way
    // void printArray(int arr[], int size){
    //     for(int i = 0; i < size; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }
    // int main(){
    //     int nums[] = {3,6,9};
    //     printArray(nums, 3);
    // }

// Never pass size of an array like this : why? explain in next class
    // void printArray(int arr[3]){
    //     for(int i = 0; i < 3; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }
    // int main(){
    //     int nums[] = {3,6,9};
    //     printArray(nums);
    // }
// Arrays always passed by reference: so the array decays to a pointer ani just points to the first element only
// This (int arr[3]) only says how many times to run not the actual size of the array

// Returning Arrays from Functions
// In c++, arrays cannot be returned directly, we use pointers

// Searching Arrays 
/* Two types : Linear(Sequential) search & Binary search(requires sorted arrays)
Linear searches one by one, Binary splits range 
Linear search : starts at index 0, compares each element with target, works on unsorted arrays
                O(n) - time complexity is greater than that of binary search
Binary search : starts with middle element, only on sorted arrays, divides search interval in half in each iteration
            if target size smaller, searches left half
            if target size bigger, searches right half
            O(log n) - time complexity
*/



