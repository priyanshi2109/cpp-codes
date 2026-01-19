/*QUESTION: display the gp: 3,12,48.....*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int x=3;
    for(int i=1;i<=n;i++){
        cout<<x<<" ";
        x=x*4;
    }
}