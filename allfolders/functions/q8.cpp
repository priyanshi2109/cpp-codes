/* write a function to calculate sum of digits */
#include<iostream>
using namespace std;
void sod(int n,int sum){
    
    while(n!=0){

        int ld= n%10 ;
        sum=sum+ld;
    n=n/10;
        
    }
    cout<<sum;

}
int main(){
    int n,sum=0;
    cout<<" enter n: ";
    cin>>n;
    sod(n,sum);
}