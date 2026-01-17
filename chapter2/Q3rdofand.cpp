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
if(a>b && a>c){
    cout<<"a is greater than b and c";

}
else if ( b>a && b>c) {
    cout<<"b is greater than a and c ";


}
else{
    cout<<"c ic greater than a and b";
}

}