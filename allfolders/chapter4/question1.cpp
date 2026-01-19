// QUESTION:  
//print the given pattern
//   ****
//   ****
//   ****
//   ****
// 
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     int n;
//     for (int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }


//second way:


#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the value of m :";
    cin>>m;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<'*';
                }
                cout<<endl;
    }
}