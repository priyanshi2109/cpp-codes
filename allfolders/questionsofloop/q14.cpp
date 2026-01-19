/* print sum of 1 to n even numbers */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n: ";
    cin>>n;
    int f=0;
    for(int i=1 ;i<=n;i++){
        if(i%2 !=0) continue;
        f=f+i;
        
    }
    cout<<f;
}