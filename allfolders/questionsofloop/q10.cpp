/*ques: wap to find higest factor of a number 'n'(other than n itself)*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    for (int i=n-1;i>=n/2;i--){
        if(n%i==0){
         
            cout<<i<<" ";
        }
        }
    }
