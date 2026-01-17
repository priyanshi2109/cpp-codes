#include<iostream>
using namespace std;
int main(){
    // int m;
    // cout<<" enter the value of m: ";
    // cin>>m;
    // int n;
    // cout<<" enter the value of n: ";
    // cin>>n;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){

        if (i==1 or i==4 or j==1 or j==6){
            cout<<'*'<<" ";
        }
        else{
            cout<<" ";
        }
        
    }
}
}