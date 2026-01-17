/* QUESTION:  wap a program if a number is composite or not.
note : if a number n has extra factor expect 1 and n then it is composite number 
otherwise it will be prime */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n: ";
    cin>>n;
    int f=1;
   
    for(int i=2;i<n;i++){
        if (n%i==0){
            f=i;
           // if(f%1!=0 and f%n!=0){
             //   cout<<" this number is composite number "
           // }
        }
    }
           // cout<<" this number is composite ";
            //cout<<i<<" ";

cout<<f<<" ";

    for(int i=1;i<=n;i++){
        if (n%i==0){
            f=i;
            cout<<"this number is prime number";

         }
        }
        // cout<<f<<" ";
        // else{
        //     cout<<"this number is prime number";
        // }
    }

