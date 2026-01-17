/* find factorial of n */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n: ";
    cin>>n;
    int f=1;
    for( int i=n;i>=1;i--){
     // f=  f*i;
      f*=i;
        //cout<<f;
    }
    cout<<f;
}