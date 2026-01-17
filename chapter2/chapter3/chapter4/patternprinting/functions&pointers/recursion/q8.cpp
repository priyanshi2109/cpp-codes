/* count the digits in number*/
#include<iostream>
using namespace std;
int cd( int n,int count ){
    if(n==0) return 1;
    int ld;
    ld=n/10;
    
    return count;
    cd(n,count +1);


}
int main(){
    int n;
    cout<<" enter n: ";
    cin>>n;
    int count=0;
    cout<<cd(n,0);

}