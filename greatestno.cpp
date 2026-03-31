// take three input integer and find greatest of them 
                         // by nested if else
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<" enter a: ";
    cin>>a;
    int b;
    cout<<" enter b: ";
    cin>>b;
    int c;
    cout<<" enter c: ";
    cin>>c;
    if(a>b){  // b can not be greatest
        if(a>c){
            cout<< a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
    if(b>a){  // a can not be greatest
        if(b>c){
            cout<<" b is greatest ";
        }
        else{
            cout<< c<<" is greatest ";
        }

    }


}