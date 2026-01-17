/* reverse a number eg 123-321 */
#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<" enter the value of n: ";
    cin>>n;
int rev=0;
while(n!=0){
    int ld=n%10;
    rev=rev*10;
    rev=rev+ld;

    n=n/10;
}
cout<<" reverse of digit: "<<rev;

    
}


    
 