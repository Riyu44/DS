#include<iostream>
#include<vector>
using namespace std;

// Unique Problem Leet code - see solution https://leetcode.com/problems/unique-number-of-occurrences/submissions/966378985/
// int main(){
//     vector<int> store;
//     int n=100;
//     vector<int> arr[100];
//     for(int i=0; i<n; i++){
//         store[arr[i]]++;
//     }
//     int ans=store[1]
//     for(int i=2; i<store.size; i++){
//         if(store[i]==0){
//             continue;
//         }
//         else{
//             ans = ans ^ store[i];
//         }
//     }
//     if(ans == 0){
//     return true;
//     }
//     else{
//     return false;
//     }