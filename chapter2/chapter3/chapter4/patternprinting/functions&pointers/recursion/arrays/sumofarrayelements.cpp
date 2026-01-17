#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,8,9,10,6,7,8,9};
int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
       // cout<<arr[i]<<" "<<endl;
        sum += arr[i];
        
    }
    cout<<sum;
}