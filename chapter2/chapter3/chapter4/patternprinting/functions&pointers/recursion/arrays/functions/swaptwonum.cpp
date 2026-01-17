#include<iostream>
using namespace std;
void swap( int &x,int &y){
   int temp;
    temp=x;
    x=y;
    y=temp;
   // cout<<x<<" "<<y;

    
}
int main (){
    int x=12;
    int y=45;
    swap(x,y);
    cout<<x<<" "<<y;

}