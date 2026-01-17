/* check if a number is even or odd*/
#include<iostream>
using namespace std;
void num(int n){
    if(n%2==0){
        cout<<" the number is even";
    }
    else{
        cout<<" the number is odd";
    }

}
int main(){
    int n;
    cout<<" enter n: ";
    cin>>n;
    num(n);

}