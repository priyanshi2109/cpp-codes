#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(j==3 or i==3){
                cout<<"*"<<" ";
            
            }
            else{
                cout<<"#"<<" ";
            }
    }
    cout<<endl;

        }
        
}

