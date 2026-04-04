// continue = skip specific iteration or part of code
// break = exit from loop

// breaak statement


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=n/2;i>=1;i--){
//         if(n%i==0){
//             cout<<i<<" ";
//             break;  // it will exit from loop after printing first factor of n other than itself
//         }
//         return 0;
//     }

// }


// continue statement 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
            break;  // it will exit from loop after printing first factor of n other than itself
        }
    }

}