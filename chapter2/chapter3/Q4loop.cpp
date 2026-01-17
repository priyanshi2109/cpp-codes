//question : print the table of 'n'.here is a integer which user
//will input
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=n;i<=n*10;i=i+n){
        cout<<i<<endl;
    }
}
