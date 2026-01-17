#include<iostream>
using namespace std;
int main(){
    int arr[20]={10,20,30,40,50};
    int n=5;//number of elements which are present in array before insertion
    int x=80;//elemnt inserted at begining 
    int pos=1;//position where you want to ensert your element
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
}