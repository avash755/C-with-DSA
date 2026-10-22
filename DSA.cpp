// #include<bits/stdc++.h>
// using namespace std;

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

// int main(){
//    int n = 11;
//    int temp = ((n-1)*2); /// for space
//    for(int i = 0; i < n; i++){
//       /// side 1 (star)
//       for(int j = 0; j < i + 1; j++){
//          cout << "*";
//       }
//       /// side 2 & 3 (Space)
//       if(i != n - 1){
//          for(int j = 0; j < temp ; j++){
//             cout << " ";
//          }
//          temp = temp - 2;
//       }
//       /// side 4 (star)
//       for(int j = 0; j < i + 1; j++){
//          cout << "*";
//       }
//       cout << "\n";
//    }
//       ////// 2nd half
//    for(int i = 0; i < n; i++){
//       /// side 5 (star)
//       for(int j = 0; j < n - i; j++){
//          cout << "*";
//       }
//       /// side 6 & 7 (space)
//       for(int j = 0; j < i * 2; j++){
//          cout << " ";
//       }
//       /// side 8 (star)
//       for(int j = 0; j < n - i; j++){
//          cout << "*";
//       }
//       cout << "\n";
//    }
//    return 0;
// }

///////////////////////////////////////////////////////////////// CHAPTER 5 (16-10-2026)

/// how function works - I already know it so, I will skip it but I will write the practice questions of function chapter.

// Qs 1. Write a function that takes sum of numbers 1 to n

// void sumN(int x){
//    int sum = 0;
//    for(int i = 1; i <= x; i++){
//       sum += i;
//    }
//    cout << sum;
// }

// int main(){
//    sumN(5);
//    return 0;
// }

//// Qs 2 calculate n function 

// void facN(int x){
//    int factorial = 1;
//    for(int i = 1; i <= x; i++){
//       factorial *= i;
//    }
//    cout << factorial;
// }
// int main(){
//    facN(5);
//    return 0;
// }

//// Q3: Calculate the sum of digits of a number. 

// void digN(int num){
//    int sum = 0;
//    for(int i = 0; ;i++){
//       if(num == 0)break;
//       sum += (num % 10);
//       num /= 10;
//    }
//    cout << sum;
// }
// int main(){
//    digN(14735);
//    return 0;
// }

//// Qs 4 calculating nCr binomial coefficient for n and r 

// int facN(int n, int s){
//    int sum = 1;
//    for(int i = n; i >= s; i--){
//       sum *= i;
//    }
//    return sum;
// }
// void nCr(int n, int r){
//    int facto1, facto2, answer,stop;
//    stop = (n - r) + 1; // 7
//    facto1 = facN(n , stop);
//    facto2 = facN(r, 1);
//    answer = facto1 / facto2;
//    cout << answer;
// }
// int main(){
//    nCr(5, 4);
//    return 0;
// }

////Homework questions 1: Check if a number is prime or not. 
// Time - 17/10/2026

// void prime(int n){
//     int isPrime = 1;
//     for(int i = 2; i < n; i++){
//         if(n % i == 0){
//             cout << "It's not a prime number.";
//             isPrime = 0;
//             break;
//         }
//     }
//     if(isPrime){
//         cout << "It's a prime number.";
//     }
// }
// int main(){
//     prime(39);
//     return 0;
// }

////Homework questions 2: print all prime numbers from 2 to n

// Time - 18/10/2026 + gpt help little :(

// void pNums(int n){
//     for(int i = 2; i < n; i++){
//         bool isPrime = true;
//         for(int j = 2; j < i; j++){
//             if(i % j == 0){
//                 isPrime = false;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout << i << " ";
//         }
//     }
// }
// int main(){
//     pNums(100);
//     return 0;
// }

////Homework questions 3: print nth Fibonacchi;

// long long Fib(int n){
//     // long long F0 = 0, F1 = 1, F3 = 0;
//     // cout << 0 << " " << 1 << " ";
//     // for(int i = 0; i < n - 2; i++){
//     //     F3 = F0 + F1;
//     //     F0 = F1;
//     //     F1 = F3;
//     //     cout << F3 << " ";
//     // }
//     if(n == 0) return 0;
//     if(n == 1) return 1;
//     return Fib(n-1) + Fib(n-2);
// }
// int main(){
//     cout << Fib(50);
//     return 0;
// }

///////////////////////////////////////////////////////////////// CHAPTER 6 (19-10-2026)

//// Decimal to Binary

// void decToBinary(int decNum){
//     int ans = 0, pow = 1, rem = 0;
//     while(decNum > 0){
//         rem = decNum % 2;
//         decNum /= 2;
//         ans += (rem * pow);
//         pow *= 10;
//     }
//     cout << ans;
// }

// int main(){
//     decToBinary(54);
//     return 0;
// }

///// Binary to Decimal

// int binToDec(int binNum){
//     int ans = 0, pow = 1, rem = 0;
//     while(binNum > 0){
//         rem = binNum % 10;
//         ans += rem * pow;
//         pow *= 2;
//         binNum /= 10;
//     }
//     return ans;
// }
// int main(){
//     cout << binToDec(101010);
//     return 0;
// }

////Homework questions 1: Convert -8 and -12 to binary & reverse it (19-10-2008)

// int DecToNegBin(int negDec){
//     /// Convert to Binary 
//     int ans = 0, pow = 1, rem = 0, decNum;
//     string toStr = to_string(negDec);
//     int length = toStr.length();

//     /// If the decimal is a negative number 
//     if(toStr[0] == '-'){
//         string newStr = " ";
//         for(int i = 0, j = 1; j < length; i++, j++){
//             newStr[i] = toStr[j];
//         }
//         decNum = stoi(newStr);
//     }
//     else{
//         decNum = negDec;
//     }
//     while(decNum > 0){
//         rem = decNum % 2;
//         ans += rem * pow;
//         decNum /= 2;
//         pow *= 10;
//     }

//     //// Second step: prefix with a 0. 
//     string tempStr = to_string(ans);
//     string preStr = "0";
//     preStr += tempStr;

//     ////Third step: fast compliment 
//     for(int i = 0; i <= sizeof(ans); i++){
//         if(preStr[i] == '0')preStr[i] = '1';
//         else{preStr[i] = '0';}
//     }

//     ////4-step: add one at the end. 
//     int preNum = stoi(preStr);
//     int stay = 0, carry = 0, size = preStr.length();

//     for(int i = size - 1; i >= 0; i--){
//         stay = preNum % 10;

//         if(stay == 1){
//             preStr[i] = '0';
//         }
//         else{
//             preStr[i] = '1';
//             break;
//         }
//         preNum /= 10;
//     }
    
//     return stoi(preStr);
// }
// int NegBinToDec(int Bin){
//     //// Step 1: Convert to first complement. 
//     string tempStr = to_string(Bin);
//     int size = tempStr.length();
//     for(int i = 0; i < size; i++){
//         if(tempStr[i] == '1')tempStr[i] = '0';
//         else{tempStr[i] = '1';}
//     }

//     //// Step 2: Add one at the end. 
//     for(int i = size - 1; i >= 0; i--){
//         if(tempStr[i] == '1'){
//             tempStr[i] = '0';
//         }
//         else{
//             tempStr[i] = '1';
//             break;
//         }
//     } 
//     //// Step 3: Convert to a decimal number. 
//     int ans = 0, rem = 0, pow = 1, tempNum = stoi(tempStr);
//     while(tempNum > 0){
//         rem = tempNum % 10;
//         ans += rem * pow;
//         pow *= 2;
//         tempNum /= 10;
//     }
//     return ans;

// }
// int main(){
//     int negBin = DecToNegBin(-8);
//     int negDec = NegBinToDec(negBin);
//     cout << negBin << endl;
//     cout << "-" << negDec << endl;
//     return 0;
// }

///////////////////////////////////////////////////////////////// CHAPTER 7 (20-10-2026)

// int main(){
//     int a = 4, b = 10;
//     /// Bitwise & Operator
//     cout << (a & b) << endl;
//     /// Bitwise | Operator 
//     cout << (a | b) << endl;
//     /// Bitwise ^ Operator 
//     cout << (a ^ b) << endl;
//     /// Bitwise << Operator 
//     cout << (b << 2) << endl;
//     /// Bitwise >> Operator 
//     cout << (b >> 2) << endl;
//     return 0;  
// }

//// Homework questions:

/// Solve for 6 & 10, 6 | 10, 6 ^ 10
// int main(){
//     cout << (6 & 10) << endl;
//     cout << (6 | 10) << endl;
//     cout << (6 ^ 10) << endl;
//     return 0;
// }

/// Solve for 10 << 2, 10 >> 1
// int main(){
//     cout << (10 << 2) << endl;
//     cout << (10 >> 1) << endl;
//     return 0;
// }

//// Next topic Operator precedence 

/// Long short long long signed unsigned

//// Homework questions
//// Question 1: Figure out how to find if a number is a power of two without any loop. 
// bool powOf2(int n){
//     return n > 0 && (n & (n-1)) == 0; /// I used ChatGPT. 
// }

// int main(){
//     cout << powOf2(31);
//     return 0;
// }

//// Question 2: WTF to reverse an integer. 

// void reverseN(int n){
//     int newN = 0, rem, size = to_string(n).size() - 1, pow = 1;
    
//     while(size > 0){
//         pow *= 10;
//         size--;
//     }
//     while(n > 0){
//         rem = n % 10;
//         newN += rem * pow;
//         pow /= 10;
//         n /= 10;
//     }
//     cout << newN << endl;
// }
// int main(){
//     reverseN(95775);
//     return 0;
// }


///////////////////////////////////////////////////////////////// CHAPTER 8 (21-10-2026)

//// Solve that problem: loops on arrays. Find smallest, largest in array

// int main(){
//     int arr[] = {5,3,1,65,3};
//     int sm, lr, size = (sizeof(arr) / 4);
    /// My code:
    // sm = arr[0]
    // lr = arr[0]
    // for(int i = 0; i < size; i++){
    //     if(sm > arr[i]){
    //         sm = arr[i];
    //     }
    //     if(lr < arr[i]){
    //         lr = arr[i];
    //     }
    // }

    /// Mam's Code
//     lr = INT_MIN; sm = INT_MAX;
//     for(int i = 0; i < size; i++){
//         if(sm > arr[i]){
//             sm = arr[i];
//         }
//         if(lr < arr[i]){
//             lr = arr[i];
//         }
//     }
//     cout << sm << endl;
//     cout << lr << endl;
//     return 0;
// }

///// Next, pro linear search. Find a target value

// int main(){
//     int arr[] = { 4, 2, 7, 8, 1, 2, 6};
//     int size = 7, target = 85, finded = 1;
//     for(int i = 0; i < size; i++){
//         if(target == arr[i]){
//             cout << arr[i];
//             finded = 0;
//         }
//     }
//     if(finded)cout << (-1);
    
// }

/////  Reverse an array without coping it.

// int main(){
//     int arr[] = {4,2,7,8,1,2,5}, size = 7;
//     int start = 0, end = size - 1;
    
//     while (start <= end){
//         swap(arr[start], arr[end]);
//         start++; end--;
//     }
    
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << endl; 
//     }
//     return 0;
// }

// 

///////////////////////////////////////////////////////////////// CHAPTER 9 (22-10-2026)
///// vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
    // vector <int> num = {1,5,2,3,7};
    // vector <int> n(3,5);

    // for(int x : num){
    //     cout << x << endl;
    // }
    // for(int x : n){
    //     cout << x << endl;
    // }

//     vector <int> n;
//     n.push_back(0);
//     n.push_back(1);
//     n.push_back(2);
//     n.push_back(3);
//     n.push_back(4);

//     cout << n.capacity() << endl;
//     cout << n.size() << endl;
//     return 0;
// }

///// Practice QS 

// #include<iostream>
// #include<vector> 
// using namespace std;

// int main(){
//     vector <int> nums = {1,2,4,1,2};
//     //// realy bad don't use it again. :|
//     // for(int x = 0; x < nums.size(); x++){
//     //     int p = 1;
//     //     for(int y = 0; y < nums.size(); y++){
//     //         if(x != y && nums[x] == nums[y]){
//     //             p = 0;
//     //             break;
//     //         }
//     //     }
//     //     if(p){
//     //         cout << nums[x];
//     //     }
//     // }
//     //// use this only for now on :)
//     int ans = 0;
//     for(int v : nums){
//         ans ^= v;
//     }
//     cout << ans << endl;
//     return 0;
// }

//// Homework questions to solve 
/// Question number 1: Linear search with vector.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> num = {1,5,3,2,6,8};
//     int target = 22, idx = 0, found = 0;

//     for(int x : num){
//         if(target == x){
//             found = 1;break;
//         }
//         idx++;
//     }
//     if(found){
//         cout << "Target finded index: " << idx << endl;
//     }
//     else{cout << "Not found" << endl;}
    
//     return 0;
// }

/// Question 2: Reverse the vector. Use a function. 
// #include<iostream>
// #include<vector>
// using namespace std;

// void rev(vector <int> &nums){
//     int start = 0, end = nums.size() - 1;

//     while(start <= end){
//         swap(nums[start], nums[end]);
//         start++; 
//         end--;
//     }
//     cout << "In the Function: ";
//     for(int x : nums){
//         cout << x << " ";
//     }
// }
// int main(){
//     vector <int> nums = {0, 4, 9, 2};

//     rev(nums);
//     return 0;
// }