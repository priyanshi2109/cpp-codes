/* print the table of a number using recursion */
// #include <iostream>
// using namespace std;

// void table(int n, int i) {
//     if (i > 10)
//         return;

//     cout << n << " x " << i << " = " << n * i << endl;
//     table(n, i + 1);
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     table(n, 1);

// }


















#include<iostream>
using namespace std;
void table(int n,int x){
    //
    
    if(x>10) return;
    //if(n>n*10) return;
      cout<<n*x<<endl;
     table(n,x+1);
  //  x++;

}

int main(){
    int n;
    cout<<" enter n: ";
    cin>>n;
    int x=1;
    table(n,1);
}