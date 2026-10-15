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

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < n - i; j++){
//             cout << ch;
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
    
//     return 0;
// }



///// Pyramid Pattern 

// int main(){
//     int n = 9;
//     for(int i = 0; i < n; i++){
//         //// Space
//         // for(int j = n - i - 1; j > 0; j--){
//         //     cout << " ";
//         // }
//         for(int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
//         //// first side Numbers
//         for(int j = 1; j <= i + 1; j++){
//             cout << j;
//         }
//         //// second number
//         for(int j = i; j > 0; j--){
//             cout << j;
//         }
//         cout << "\n";
//     }
//     return 0;
// }



///// Hollow Diamond Pattern 

// int main(){
//     int n = 4;
//     for(int i = 0; i < n; i++){
//         ////// SIDE 1
//         ///space
//         for(int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
//         /// star
//         cout << "*";
//         // /// space 2
//         // for(int j = 0; j < i; j++){
//         //     cout << " ";
//         // }
//         // ////// SIDE 2
//         // for(int j = 0; j < i - 1; j++){
//         //     if(j > i)break;
//         //     cout << " ";
//         // }
//         // /// print 3 star
//         // for(int i = )
//         // cout << "\n";

//         if(i != 0){
//             /// space
//             for(int j = 0; j < 2*i-1; j++){
//                 cout << " ";
//             }
//             /// star
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     //// bottom
//     for(int i = 0; i < n-1; i++){
//         // /// space
//         // for(int j = 0; j < i; j++){
//         //     cout << " ";
//         for(int j = 0; j < i + 1; j++){
//             cout << " ";
//         }
//         // }
//         // /// start
//         cout << "*";
         
//         if(i != n - 2){
//         //     /// space
//         //     for(int j = 0; j < 2*i - 1; j++){
//         //         cout << " ";
//         //     }
//         ////// MAIN LOGIC 2 * (n-2-i) - i
//         for(int j = 0; j < 2*(n-i)-5; j++){
//             cout << " ";
//         }
//         //     /// start
//             cout << "*";
//         }
        

        
//         cout << "\n";
//     }
//     return 0;
// }


////// Butterfly Pattern 

int main(){
   int n = 11;
   int temp = ((n-1)*2); /// for space
   for(int i = 0; i < n; i++){
      /// side 1 (star)
      for(int j = 0; j < i + 1; j++){
         cout << "*";
      }
      /// side 2 & 3 (Space)
      if(i != n - 1){
         for(int j = 0; j < temp ; j++){
            cout << " ";
         }
         temp = temp - 2;
      }
      /// side 4 (star)
      for(int j = 0; j < i + 1; j++){
         cout << "*";
      }
      cout << "\n";
   }
      ////// 2nd half
   for(int i = 0; i < n; i++){
      /// side 5 (star)
      for(int j = 0; j < n - i; j++){
         cout << "*";
      }
      /// side 6 & 7 (space)
      for(int j = 0; j < i * 2; j++){
         cout << " ";
      }
      /// side 8 (star)
      for(int j = 0; j < n - i; j++){
         cout << "*";
      }
      cout << "\n";
   }
   return 0;
}




















