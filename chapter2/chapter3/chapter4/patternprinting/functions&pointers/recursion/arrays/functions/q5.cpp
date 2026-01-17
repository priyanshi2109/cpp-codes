/* find the maximum of two numbers */
#include<iostream>
using namespace std;
void max(int a,int b){
    if(a>b){
        cout<<"max is :  "<<a;
    }
    else{
        cout<<b;
    }
}
int main(){
    int a;
    cout<<" enter a: ";
    cin>>a;
    int b;
    cout<<" enter b: ";
    cin>>b;
    max(a,b);

}