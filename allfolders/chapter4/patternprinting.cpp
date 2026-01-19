//where input is only m =number of rows
// #include<iostream>

// using namespace std;
// int main(){
//     int m ;
//     cout<<"enter the value of m: ";
//     cin>>m;//m=number of rows ,coulmns=5
//     for(int i=1;i<=m;i++){
//         cout<<"*****"<<endl;
//     }
// }


//when input are m and n rows and coulmn

#include<iostream>
using namespace std;
int main(){
    int m ;
    cout<<"enter the value of m: ";
    cin>>m;//m=number of rows 
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
}