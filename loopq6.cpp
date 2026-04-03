//  question 1:print GP = 1,2,4,8,16....... taking until n time or upto n terms taking user input


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ,";
//         a=a*2;
//     }

// }


//  question 1:print GP = 3,12,48....... taking until n time or upto n terms taking user input



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<" ,";
        a=a*4;
    }

}




