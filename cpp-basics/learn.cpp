#include<iostream>
using namespace std;

// ====== USER INPUT/OUTPUT =======
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << "Value of x is " << x << endl << "and value of y is " << y;
//     return 0;
// }


// ======= DATA TYPES ========

// --- string & getline ---
// int main() {
//     string s;
//     // -- takes only the word before space
//     cin >> s;
//     cout << s;

//     // -- to take the entire line
//     string str;
//     getline(cin, str);
//     cout << str;
//     return 0;
// }

// --- char ---
// int main() {
//     char ch = 'g';
//     cout << ch;
//     return 0;
// }


// ======== IF/ELSE STATEMENT ========
// Q- WRITE A PROGRAM THAT TAKES AN INPUT OF AGE AND PRINTS IF YOU'RE ADULT ORN NOT

// int main() {
//     int age;
//     cin >> age;
//     if (age >= 18) {
//         cout << "You are an adult";
//     } else {
//         cout << "You are not an adult";
//     }
// }

// ======== SWITCH CASE ==============
// Q- TAKE THE DAY NO. AND PRINT THE CORRESPONDING DAY, FOR 1 PRINT MONDAY, FOR 7 PRINT SUNDAY

// int main() {
//     int day;
//     cin >> day;

//     switch(day) {
//         case 1: 
//             cout << "Monday";
//             break;
//         case 2: 
//             cout << "Tuesday";
//             break;
//         case 3: 
//             cout << "Wednesday";
//             break;
//         case 4: 
//             cout << "Thursday";
//             break;
//         case 5: 
//             cout << "Friday";
//             break;
//         case 6: 
//             cout << "Saturday";
//             break;
//         case 7: 
//             cout << "Sunday";
//             break;
//         default:
//             cout << "invalid";
//     }
//     return 0;
// }

// ============ ARRAYS ==========
// int main() {
//     int arr[5];
//     for (int i = 0; i<=4; i++) {
//         cin >> arr[i];
//     }
//     arr[1] = 2;
//     for (int i = 0; i<=4; i++) {
//         cout << arr[i] << ", ";
//     }
//     return 0;
// }

// --- 2d array ---
// int main() {
//     // 3 rows and 5 columns
//     int arr[3][5];
//     arr[1][3] = 69;
//     cout << arr[1][3];
// }


// =========== Strings ==========
// int main() {
//     string s = "Aditya";
//     int len = s.size();
//     s[len-1] = 'z';
//     cout << "First element: " << s[0] << endl;
//     cout << "Last (changed) element: " << s[len-1];
//     return 0;
// }


// ========== LOOP ==========
// int main() {
//     // --- for loop ---
//     for (int i=1; i<=10; i++) {
//         cout << "Adi" << endl;
//     }

//     // --- while loop ---
//     int j = 1;
//     while (j<=5) {
//         cout << "Striver" <<endl;
//         j++;
//     }

//     // --- do-while loop ---
//     int k = 2;
//     do {
//         cout << "Hello" << endl;
//         k++;
//     } while (k<=1);
    
//     return 0;
// }


// ========= FUNCTIONS ==========

// --- void (non-parametarized) ---
// void printName() {
//     cout << "Non-parametarized void function";
// }
// int main() {
//     printName();
//     return 0;
// }

// --- void (parametarized) ---
// void printName(string name) {
//     cout << "Hello " << name;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }

// --- return  ---
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }

// --- pass by value ---
// void doSomething(int num) {
//     cout << num << endl;    // prints 10
//     num += 5;
//     cout << num << endl;    // prints 15
// }
// int main() {
//     int num = 10;
//     doSomething(num);
//     // original num didn't went, copy went in fn
//     cout << num << endl;     // prints 10 (num isn't modified by fn)
//     return 0;
// }

// --- pass by reference ---
// void doSomething(int &num) {
//     cout << num << endl;    // prints 10
//     num += 5;
//     cout << num << endl;    // prints 15
// }
// int main() {
//     int num = 10;
//     doSomething(num);
//     // original num address sent
//     cout << num << endl;  // prints 15 (num is modified by fn)
//     return 0;
// }

// --- pass by ref for array ---
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside fn:" << arr[0] << endl; // prints 101
}
int main() {
    int n = 5;
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    // array always goes with reference
    doSomething(arr, n);

    cout << "Value inside main:" << arr[0] << endl; // prints 101
    return 0;
}