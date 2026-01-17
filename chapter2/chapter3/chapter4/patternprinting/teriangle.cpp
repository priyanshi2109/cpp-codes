#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
if (i%2 !=0 ){
   cout<<j<<" ";
    //cout<< (char)(j+64)<<" ";
}
else{
    //cout<<j;
     cout<< (char)(j+64)<<" ";
}
           // cout<< (char)(j+96)<<" ";
    }
    cout<<endl;

        }
        
}


