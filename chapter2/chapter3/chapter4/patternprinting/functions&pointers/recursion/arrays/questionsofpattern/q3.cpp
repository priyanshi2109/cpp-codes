/* print the given pattern

A B C D
A B C D
A B C D

*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++)
        cout<<(char)(j+64)<<" ";
         cout<<endl;

    }
    //cout<<endl;

}