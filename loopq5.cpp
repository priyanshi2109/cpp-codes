// print the Ap = 1,3,5,7,9....... taking until n time or upto n terms taking user input 
  

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ,";
//       a=a+2;
//     }
    

// }


//    or 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n+(n-1);i+=2){
        cout<<i<<" ,";
    }
    
}


   


