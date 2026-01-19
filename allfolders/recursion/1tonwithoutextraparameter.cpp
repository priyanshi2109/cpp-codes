#include<iostream>
using namespace std;
void print(int n){
if (n==0)return;//base case 
//cout<<n<<endl;//work
print(n-1);//call
cout<<n<<endl;//work
}
int main(){
int n;
cout<<"enter the value of n: ";
cin>>n;
print(n);
}
