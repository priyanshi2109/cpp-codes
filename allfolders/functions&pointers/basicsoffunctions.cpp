
//BASICS OF FUNCTIONS 
//HOW FUNCTION WORK


#include<iostream>
using namespace std;
void priyanshi(){
    cout<<" my name is priyanshi vishwakarma"<<endl;
    cout<<" im in 2nd year"<<endl;

}
void student(){
    cout<<" priyanshi is a student"<<endl;
    priyanshi();
}
int main(){
    cout<<" don't be late "<<endl;
    priyanshi();//function call
    student();
}
