#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,2,3,4,5};
    int n=5;
    int pos =3;
    int x=5 ;
    for (int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[2]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}