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


///// Triangle Pattern letters

int main(){
    int n = 7;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        ch = ch + 1;
        cout << "\n";
    }
    return 0;
}










