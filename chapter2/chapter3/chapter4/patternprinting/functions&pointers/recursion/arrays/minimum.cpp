#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,7,8,9,10,78};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<mn) mn=arr[i];

    }
    cout<<mn;
}