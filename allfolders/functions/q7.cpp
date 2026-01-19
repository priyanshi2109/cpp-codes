/* write a function to reverse  number */


#include<iostream>
using namespace std;
void revnum(int n ,int rev){
     rev=0;
    while(n!=0){
        int ld=n%10;
        rev=rev*10;
        rev=rev+ld;
        n=n/10;
        cout<<ld;

    }
}
int main(){
    int n,rev;
    cout<<" enter the value of n: ";
    cin>>n;
    revnum(n,rev);
}