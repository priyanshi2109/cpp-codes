
//QUESTION: display the gp-1,2,4,8,16,32....


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the valie of n: ";
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
    cout<<x<<" ";
        x=x*2;
      
       // cout<<x<<" ";
    }

}