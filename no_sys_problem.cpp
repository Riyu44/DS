#include<iostream>
using namespace std;

// Leetcode question-7
// int main(){
//     int n;
//     int sign=1;
//     if(n>=0)
//     sign=1;
//     else
//     sign=-1;
//     long long ans=0;
//     n=abs(n);
//     while(n!=0){
//         ans= (n%10)+(ans*10);
//         n=n/10;
//     }
//     if(ans>INT_MAX || ans<INT_MIN)
//     return 0;
//     else
//     return ans*sign;
// }

// Leetcode question-1009
// int main(){
//     int n;
//     if(n==0)
//     return 1;
//     int m=n;
//     int mask=0;
//     while(m!=0){
//         mask =(mask << 1) | 1;
//         m=m>>1;
//     }
//     int ans = (~n) & mask;
//     return ans;
// }

// Leetcode question 231
int main(){
    int n;
    while(n != 0){
        if(n==1)
        return true;
        if(n%2 !=0)
        return false;
        n/=2;
    }
    return true;
}