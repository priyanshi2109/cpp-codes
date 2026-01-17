#include<iostream>
using namespace std;
int main (){
    int x= 3,y,z;
    y=x=10;//right to left in herarici it will be left to right like  ( +,-,*,/)
    z=x<10;//10is not less then 10 this condition is false so it will be written as false =0
    cout<<x<<" "<<y<<" "<<z;
}