/* print sum of 1 to n numbers */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n: ";
    cin>>n;
    int f=0;
    for(int i=1 ;i<=n;i++){
        
        f=f+i;
        
    }
    cout<<f;
}