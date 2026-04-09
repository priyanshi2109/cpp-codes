// factorail of n numbers

 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
     int product=1;
     for( int i=1;i<=n;i++){
        product=product*i;
        cout<<"factorial is "<<product<<endl;
        
     }
      
    
}
