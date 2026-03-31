/*take input percentage and print grade according to percentage
1. 81-100: very good
2. 61-80: good
3. 41-60: average
4. below 40: fail

*/




#include<iostream>
using namespace std;
int main(){
    float percentage;
    cout<<" enter percentage: ";
    cin>>percentage;
    if(percentage>=80 and percentage<=100){
        cout<<"very good";
    }
    else if(percentage>=60 and percentage<80){
        cout<<"good";
    }
    else if(percentage>=40 and percentage<60){
        cout<<"average";
    }
    else{
        cout<<"fail";
    }
}