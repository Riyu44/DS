#include <iostream>
using namespace std;

// MCQ to find what would be the output
// int main(){
//     int a=1;
//     int b=2;
//     if(a-- >0 && ++b>2){
//         cout << 1;
//     }
//     else{
//         cout << 2;
//     }
// }

// Very good eample. In this the ++b command won't be executed due to it being a OR operator
// int main(){
//     int a=1;
//     int b=2;
//     if(a-- >0 || ++b>2){
//         cout << 1;
//     }
//     else{
//         cout << 2;
//     }
//     cout << endl;
//     cout << a << " " << b << endl;
// }

// Output sum of integers from 1 to n
// int main(){
//     int count=0, n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         count += i;
//     }
//     cout << count;
// }

// Fibbonaci Series
// int main(){
//     int n=10;
//     int a=0, b=1;
//     cout << a << endl << b << endl;
//     for(int i=1; i<=n; i++){
//         int c = a+b;
//         cout << c <<endl;
//         a=b;
//         b=c;
//     }
// }

// Tell if a number is prime (isPrime)
// int main(){
//     int n;
//     cin >> n;
//     for(int i=2; i<=n/2; i++){
//         if(n%i == 0){
//             cout << false;
//             return false;
//         }
//     }
//     cout << true;
//     return true;

// Given an integer n return the difference between the product and sum of its digit.
// int main(){
//     int n;
//     cin >> n;
//     int multiply=1, add=0;
//     while(n>0){
//         int a = n%10;
//         multiply *= a;
//         add += a;
//         n /= 10;
//     }
//     cout <<  (multiply-add);
// }

// Return the number of one bits present in a number
int main(){
    int n=11;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout << count;
}