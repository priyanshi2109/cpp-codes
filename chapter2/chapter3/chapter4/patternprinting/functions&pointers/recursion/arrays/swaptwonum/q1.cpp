/* swap two numbers */

//method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int x=12;
//     int y=45;
//     cout<<x<<" "<<y<<endl;
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     cout<<x<<" "<<y;
// }


//method 2

#include<iostream>
using namespace std;
int main (){
    int x=6;
    int y=4;
    cout<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;

}
