/* write a function to find square of a number*/


// #include<iostream>
// using namespace std;
// int square(int n){
//     return n*n;
// }
// int main(){
// int n;
// cout<<" enter n: ";
// cin>>n;
// cout<<square(n);
// }

#include<iostream>
using namespace std;
void square(int n){
    cout<<n*n;
}
int main(){
int n;
cout<<" enter n: ";
cin>>n;
square(n);
}