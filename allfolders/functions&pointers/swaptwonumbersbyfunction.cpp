

//method number 1

#include<iostream>
using namespace std;
void swap(int & x,int &  y){
    int temp=x;
    x=y;
    y=temp; 
}
int main(){
    int x=12;
    int y=45;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

}

//method number 2

