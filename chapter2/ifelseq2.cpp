#include<iostream>//check that is the number is divisible by 5 or 3
using namespace std;
int main (){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    if(n%5==0 and n%3==0){
        cout<<"the number is divisible by 5 and 3";
    }
    else
    { 
        cout<<"the number is not divisble by 5 and 3";
    }


}