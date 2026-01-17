
// #include<iostream>
// using namespace std;
// int main(){
//     // int m;
//     // cout<<"enter the value of rows: ";//number of rows 
//     // cin>>m;
//     // int n;
//     // cout<<"enter the value of coulmns: ";
//     // cin>>n;

//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if (  ){
//                 cout<<"*"<<" ";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }




#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<" enter the value of odd n: ";
    cin >> n; // n should be odd

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(j==i|| 
             i + j == n - 1 
            
            ) 
            {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

