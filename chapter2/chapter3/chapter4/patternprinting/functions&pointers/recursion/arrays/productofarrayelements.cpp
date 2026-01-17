#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,9};
int n=sizeof(arr)/4;
    int product =1;
    for(int i=0;i<n;i++){
       // cout<<arr[i]<<" "<<endl;
        product *= arr[i];
        
    }
    cout<<product;
}