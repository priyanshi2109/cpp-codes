/* question:  find the sum of digits */
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<" enter  the value of n: ";
    cin>>n;
   
    while( n>0){
        int digit =n%10;
        sum= sum+digit;
        n=n/10;
       
    }
    cout<<" sum of digits : "<<sum;

    }
