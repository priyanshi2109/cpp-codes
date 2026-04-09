// wap to count the digit in a number using while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int count =0;
    while(n!=0){
        count++;
        n=n/10;

    }
    cout<<"number of digits in n is: "<<count;
    

}