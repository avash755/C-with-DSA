#include<bits/stdc++.h>
using namespace std;

/// Square Pattern with number

// int main(){
//     int n = 4, row = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= row; j++){
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }


//// Square Pattern with *

// int main(){
//     int n = 4; 
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }


///// Square Pattern with letters

// int main(){
//     int n = 4;

//     for(int i = 0; i < n; i++){
//         char ch = 'A';
//         for(int j = 0; j < n; j++){
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << "\n";
//     }
// }

///// Square Pattern with num increase by 1

// int main(){
//     int n = 3, num = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }


///// Square Pattern with letters 2nd time

// int main(){
//     int n = 3;
//     char ch = 'A';

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


///// Triangle Pattern *

// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }


///// Triangle Pattern numbers

// int main(){
//     int n = 9;
//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j < i; j++){
//             cout << i << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }


////////////////////////////////////////////////// DAY 2 (10-10-2026)


///// Triangle Pattern letters

// int main(){
//     int n = 7;
//     char ch = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << ch << " ";
//         }
//         ch = ch + 1;
//         cout << "\n";
//     }
//     return 0;
// }


///// Triangle Pattern with number incrase 1, 12, 123, 1234

// int main(){
//     int n = 7;
//     for(int i = 0; i < n; i++){
//         int num = 1;
//         for(int j = 0; j <= i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/// YT way->

// int main(){
//     int n = 4;
//     for(int i = 0; i < n; i++){
//         for(int j = 1; j <= i + 1; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


///// Triangle Pattern (REVERSE) 

// int main(){
//     int n = 11;
//     for(int i = 1; i <= n; i++){
//         for(int j = i; j > 0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


///// Triangle Pattern (REVERSE) with letters

// int main(){
//     int n = 9;
//     for(int i = 0; i < n; i++){
//         char ch = 'A';
//         ch = ch + i;
//         for(int j = i; j >= 0; j--){
//             cout << ch << " ";
//             ch = ch - 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


///// Floyds Triangle Pattern 1 23 456 78910

// int main(){
//     int n = 8, num = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


///// Floyd's Triangle Pattern with letters

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 1; j <= i + 1; j++){
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }



/////  Inverted Triangel Pattern 1111 222 33 4 YT HELP

// int main(){
//     int n = 4;
//     for(int i = 0; i < n; i++){
//         /// SPACE *****
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         /// NUMBER
//         for(int j = 0; j < n - i; j++){
//             cout << i + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }



///// Inverted Triangel pattern with Letters

int main(){
    int n = 4;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < n - i; j++){
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }
    
    return 0;
}





