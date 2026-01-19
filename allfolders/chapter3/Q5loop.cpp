//question:display this AP- 1,2,3,4,5,....upto 'n' terms
//METHOD 1:
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     //let we want to print AP like = 1,3,5,7,9.......then
//     for( int i=1;i<=2*n-1;i=i+2){
//         cout<<i<<" ,";
//     }
// }


//METHOD 2
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;//4,7,10,13....
    int a=2;
    
    for(int i=1;i<=n;i++){
        cout<<a<<" ,";
        a=a*2;

    }
}
//question : displays this GP 4,7,10,13...upto n
