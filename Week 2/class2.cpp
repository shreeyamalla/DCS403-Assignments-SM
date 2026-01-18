#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main(){

/*  char letter = 'A';
    // cout << letter << " has code " << int(letter) << endl;
    char next = letter + 1;
    cout << next;
*/

/*  srand(time(0));
    int num = rand() % 26;
    char letter = 'A' + num;
    // char letter = 'A' + rand() % 26;
    cout << letter;
*/

/*  char hex;
    int decimal; 
    cout << "enter a hexadecimal: ";
    cin >> hex;

    if(hex >= '0' && hex <= '9'){
        decimal = hex - '0';
        cout << decimal;
    }else if (hex >= 'A' && hex <= 'F'){
        decimal = 10 + (hex - 'A');
        cout << decimal;
    }
*/

//------------ MATHEMATICAL FUNCTIONS -----------------

// 1
    // double num;
    // cout << "Enter a number: ";
    // cin >> num;

    // cout << "Square root of " << fabs(num) << " = " << sqrt(fabs(num)) << endl;
    // cout << "2 raised to power 3 = " << pow(2, 3) << endl;
    // cout << "Absolute value of " << num << " = " << fabs(num) << endl;

// 2
    // double angle;
    // cout << "Enter angle in radians: ";
    // cin >> angle;

    // cout << "sin = " << sin(angle) << endl;
    // cout << "cos = " << cos(angle) << endl;
    // cout << "tan = " << tan(angle) << endl;

// 3
    // double a, b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // cout << "Maximum = " << fmax(a, b) << endl;
    // cout << "Minimum = " << fmin(a, b) << endl;

//---------------- CHARACTERS ---------------------------

// 1
    // char ch;
    // cout << "Enter a character: ";
    // cin >> ch;

    // if(isalpha(ch)){
    //     cout << ch << " is a letter." << endl;
    // }
    // else if(isdigit(ch)){
    //     cout << ch << " is a digit." << endl;
    // }
    // else if (ispunct(ch)) {   
    //     cout << ch << " is a special character." << endl;
    // }
    // else {
    //     cout << ch << " is some other character." << endl;
    // }

// 2
    // char ch;
    // cout << "Enter a character: ";
    // cin >> ch;

    // if (islower(ch)) {  
    //     cout << "Uppercase: " << char(toupper(ch)) << endl;
    // } 
    // else if (isupper(ch)) {  
    //     cout << "Lowercase: " << char(tolower(ch)) << endl;
    // } 
    // else {
    //     cout << ch << " is not a letter." << endl;
    // }

// 3
    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);

    // int vowels = 0, consonants = 0;
    // for(int i = 0; i < str.length(); i++){
    //     if(isalpha(str[i])){
    //         char ch = tolower(str[i]);
    //         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    //             vowels++;
    //         }
    //         else{
    //             consonants++;
    //         }
    //     }
    // }

    // cout << "Vowels: " << vowels << endl;
    // cout << "Consonants: " << consonants << endl;

//---------------- STRINGS ------------------------------

// 1
    // string str;
    // cout << "Enter a string: ";
    // cin >> str;
    // cout << "Length of string: " << str.length() << endl;

// 2
    // string str;
    // cout << "Enter a string: ";
    // cin >> str;

    // reverse(str.begin(), str.end());
    // cout << "Reversed string: " << str << endl;

// 3
    // string str, rev;
    // cout << "Enter a string: ";
    // cin >> str;

    // rev = str;
    // reverse(rev.begin(), rev.end());

    // if(str == rev){
    //     cout << "The string is a palindrome." << endl;
    // }
    // else{
    //     cout << "The string is not a palindrome." << endl;
    // }

// 4
    // string str1, str2;
    // cout << "Enter first string: ";
    // cin >> str1;
    // cout << "Enter second string: ";
    // cin >> str2;

    // string result = str1 + " " + str2;
    // cout << "Concatenated String: " << result << endl;

//------------------------- ADVANCED: MATHEMATICAL FUNCTIONS ----------------------------------

// 1 - Quadratic Equation Roots
    // double a, b, c;
    // cout << "Enter coefficients a, b, c: ";
    // cin >> a >> b >> c;

    // double D = b * b - 4 * a * c;

    // if(D > 0){
    //     double x1 = (-b + sqrt(D)) / (2 * a);
    //     double x2 = (-b - sqrt(D)) / (2 * a);
    //     cout << "Roots are real and distinct: " << x1 << " and " << x2 << endl;
    // }
    // else if(D == 0){
    //     double x = -b / (2 * a);
    //     cout << "Roots are real and equal: " << x << endl;
    // }
    // else{
    //     cout << "Roots are imaginary." << endl;
    // }

// 2 - Distance Between Two Points
    // double x1, y1, x2, y2;
    // cout << "Enter x1, y1, x2, y2: ";
    // cin >> x1 >> y1 >> x2 >> y2;

    // double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // cout << "Distance between points = " << distance << endl;

//----------------------------------- ADVANCED: CHARACTERS ---------------------------

// 1 - Character Frequency Counter
    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);

    // int freq[26] = {0};

    // for(int i = 0; i < str.length(); i++){
    //     if(isalpha(str[i])){
    //         freq[tolower(str[i]) - 'a']++;
    //     }
    // }

    // for(int i = 0; i < 26; i++){
    //     if(freq[i] > 0){
    //         cout << char('a' + i) << ":" << freq[i] << "  ";
    //     }
    // }
    // cout << endl;

// 2 - Character Case Alternator
    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);

    // for(int i = 0; i < str.length(); i++){
    //     if(i % 2 == 1 && isalpha(str[i])){
    //         str[i] = toupper(str[i]);
    //     }
    //     else if(isalpha(str[i])){
    //         str[i] = tolower(str[i]);
    //     }
    // }
    // cout << str << endl;

// 3 - Remove All Non-Alphabetic Characters
    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);

    // string result = "";
    // for(int i = 0; i < str.length(); i++){
    //     if(isalpha(str[i])){
    //         result += str[i];
    //     }
    // }
    // cout << result << endl;

//------------------------- ADVANCED: STRINGS ---------------------------------

// 1 - Count Words in a Sentence
    // string str;
    // cout << "Enter a sentence: ";
    // getline(cin, str);

    // int count = 0;
    // bool inWord = false;

    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] != ' ' && !inWord){
    //         count++;
    //         inWord = true;
    //     }
    //     else if(str[i] == ' '){
    //         inWord = false;
    //     }
    // }

    // cout << "Number of words: " << count << endl;

// 2 - Find the Longest Word in a Sentence
    // string str;
    // cout << "Enter a sentence: ";
    // getline(cin, str);

    // string word = "", longest = "";

    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] != ' '){
    //         word += str[i];
    //     }
    //     else{
    //         if(word.length() > longest.length()){
    //             longest = word;
    //         }
    //         word = "";
    //     }
    // }
    // if(word.length() > longest.length()){
    //     longest = word;
    // }
    // cout << "Longest word: " << longest << endl;

// 3 - Anagram Checker
    // string str1, str2;
    // cout << "Enter first string: ";
    // cin >> str1;
    // cout << "Enter second string: ";
    // cin >> str2;

    // sort(str1.begin(), str1.end());
    // sort(str2.begin(), str2.end());

    // if(str1 == str2){
    //     cout << "Strings are anagrams." << endl;
    // }
    // else{
    //     cout << "Strings are not anagrams." << endl;
    // }

// 4 - Remove Vowels from a String
    // string str;
    // cout << "Enter a string: ";
    // cin >> str;

    // string result = "";
    // for(int i = 0; i < str.length(); i++){
    //     char ch = tolower(str[i]);
    //     if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
    //         result += str[i];
    //     }
    // }
    // cout << result << endl;

// 5 - String Compression
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = "";
    int count = 1;

    for(int i = 0; i < str.length(); i++){
        if(i + 1 < str.length() && str[i] == str[i + 1]){
            count++;
        }
        else{
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }
    cout << compressed << endl;

    return 0;
}