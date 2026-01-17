#include<iostream>//program of cheking 3 digit number or not
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"this is a three digit number";

    }
    else{
        cout<<"this is not a three digit number";
    }

}
