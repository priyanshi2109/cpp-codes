//QUESTION:-take 3 positive integer input and print the gratest of them
#include<iostream>
using namespace std;
int main (){
int a,b,c;
cout<<"enter the value of a: ";
cin>>a;
cout<<"enter the value of b: ";
cin>>b;
cout<<"enter the value of c: ";
cin>>c;
if(a>c){
    if(a>c){
        cout<<a<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
}
else{
    if(b>c){
        cout<<b<<" is greatest";

    }

    else{
        cout<<c<<" is greatest";
    }
}



}