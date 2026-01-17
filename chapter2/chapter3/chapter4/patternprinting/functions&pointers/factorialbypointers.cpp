#include<iostream>
using namespace std;
void fact(int *a){
    int f=1;
for(int i=1;i<=*a;i++){
    f=f*i;
}
cout<<f;
}
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    fact(&a);

}