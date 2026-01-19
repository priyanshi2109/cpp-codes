/* write a function to count digits of number */


// #include<iostream>
// using namespace std;
// void cd(int n,int count){
// if(n==0){
//     count=1;
// }
// while(n!=0){
//     n=n/10;
//     count++;
// }
// cout<<count;
// }
// int main(){
//     int n,count=0;
//     cout<<"enter n: ";
//     cin>>n;
//     cd(n,count);

// }




#include<iostream>
using namespace std;
int cd(int n,int count){
    if(n==0){
        count=1;
    }
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;

}

int main(){
    int n,count=0;
    cout<<" enter n: ";
    cin>>n;
    cout<<cd(n,count );
}