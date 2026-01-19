

//startraingle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }


//numbertraingle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


//alphabettriangle

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<(char)(j+64)<<" ";
//         }r)(j+64)
//         cout<<endl;
//     }
// }


//interms of coulmn printing number traingle

// 1
// AB
// 123
// ABCD
// 12345
//soln
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
if( i%2!=0){
    cout<<j;
}
            
        
        else{
            cout<<(char)(j+64);
        }
    }

        cout<<endl;
    }
}