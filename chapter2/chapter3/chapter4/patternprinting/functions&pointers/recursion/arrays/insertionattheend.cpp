#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5};
    int n=5;//number of elements or size
    int x=20;//element inserted at end;
    arr[n]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
    
}