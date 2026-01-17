//QUESTION:-take positive integer input and tell if it is 
//divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"take any positive integer X: ";
    cin>>x;
    if(x%5==0 or x%3==0 and x%15!=0){
        cout<<"it is divisble by 5 or 3 but not divisible by 15";

    }
    else{
        cout<<"the number isnt satisfy the condition";
    }
}