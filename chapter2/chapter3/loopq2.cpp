//print all the odd numbers 1 to 100
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%3==0){
//             cout<<i<<" ";
//         }
//     }
// }

//second method
//print all the odd numbers
#include<iostream>
using namespace std;
int main (){
    for(int i=3;i<=100;i=i+2){
        cout<<i<<" ";
    }
}