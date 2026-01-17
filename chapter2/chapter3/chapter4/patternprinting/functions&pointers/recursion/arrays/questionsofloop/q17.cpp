/*  QUESTION: count  the number of digits in a number */




// #include <iostream>
// using namespace std;

// int main() {
//     int num, count = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     // If number is 0, it has 1 digit
//     if (num == 0) {
//         count = 1;
//     } else 
//         while (num != 0) {
//             num = num / 10;   // remove last digit
//             count++;          // increase count
//         }
//         cout << "Number of digits = " << count;

//     }

   













// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=0;
//     cout<<" enter the value of n: ";
//     cin>>n;
//     if( n==0){
//         count =1;
//     }
//     else{
//         while( n!=0){
//             n=n/10;
//             count++;
//         }
//         cout<<" number of digits : "<<count;
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<" enter n: ";
    cin>>n;
    if( n==0){
        count=1;
    }
    else{

        while( n!=0 ){
            n=n/10;
            count++;
        }
        cout<<" number of digits: "<<count;

    }
    

}