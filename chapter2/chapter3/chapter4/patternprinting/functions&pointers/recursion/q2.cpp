/* print 1 to n*/



// #include<iostream>
// using namespace std;
// void greet( int n){
//      //int n=1;
//     if(n==11) return;
//    // int n=1;
//     cout<<n<<endl;
//     greet(n+1);


// }
// int main(){
//     int n;
    
//     greet(1);
// }

// #include<iostream>
// using namespace std;
// void print(int n,int x){
//     if(x>n) return;
//     cout<<x<<endl;
//     print( n,x+1);
// }
// int main (){
//     int n;
//     cout<<" enter n : ";
//     cin>>n;
//     int x;
//     print ( n,1);
// }


#include<iostream>
using namespace std;
void greet(int n){
    if(n==0) return;//basecase

   // cout<<n<<endl;//work
    greet(n-1);//call
cout<<n<<endl;//work
}
int main(){
greet(9);
}