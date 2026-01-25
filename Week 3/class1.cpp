#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
// while loop
/*  int num, sum = 0;
    int i = 1;
    cout << "enter a number: ";
    cin >> num;

    while (i <= num){
        sum += i;
        i++;           //without this the code breaks
    }
    cout << sum;
*/

// do-while loop
/*  int num, sum = 0;
    int i = 1;
    cout << "enter  a number: ";
    cin >> num;
    do{ 
        sum += i;
        i++;
    }while (i <= num);
    cout << sum;
*/

// for loop
/*  int num, sum = 0;
    cout << "enter a number: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    cout << sum;
*/

// RANGE-BASED FOR LOOP - iterates through every dataset present
/*  int numbers[] = {1,2,3,4,5};
    for(int n : numbers){
        cout << n << " ";
    } 
*/
    
// Nested for loop
/*  for(int i = 1; i <= 3; i++){        //gives rows
        for(int j = 1; j <= 3; j++){   // gives columns: i=1, j=1,2,3 runs
            cout << i * j << "\t";
        }
        cout << endl;
    }
*/

// break
/*  for(int i = 1; i <= 10; i++){
        if(i == 6) break;
        cout << i << " ";
    }
*/

// continue
/*  for(int i = 1; i <= 10; i++){
        if(i == 6) continue;
        cout << i << " ";
    }
*/

// sentinel values
/* int num;
    while (num != 0) {   // 0 is the sentinel value
        cout << "You entered: ";
        cin >> num;
    }
    cout << "Sentinal Value detected.";
*/

//need to do 2 case studies- pallindrome for digits ani prime num

// palindrome using for loop for digits
    int num, rev=0;
    cout << "enter a bunch of numbers: ";
    cin >> num;

    rev = num;
    // reverse(rev.begin(), rev.end());
    if (num == rev){
        cout << num << " is palindrome";
    }else{
        cout << num << " is not palindrome.";
    }

}