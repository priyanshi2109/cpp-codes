//  count the factorail of a number


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//      int fact=1;
//      while(n!=0){
//         fact=fact*n;
//         n--;
//      }
//      cout<<"factorial is "<<fact;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
     int product=1;
     for( int i=1;i<=n;i++){
        product=product*i;
     }
     
     cout<<"factorial is "<<product;
}

