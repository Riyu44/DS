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

int main(){
    int a= 3;
    cout << (25 * (++a));
}