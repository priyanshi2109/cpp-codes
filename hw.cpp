// question - if thr ages of ram shyam and  ajay are input the determine the youngest of them

#include<iostream>
using namespace std;
int main(){
    int ram;
    cout<<" enter age of ram: ";
    cin>>ram;
    int shyam;
    cout<<" enter age of shyam: ";
    cin>>shyam;
    int ajay;
    cout<<" enter age of ajay: ";
    cin>>ajay;
    if(ram<shyam){  // shyam can not be youngest
        if(ram<ajay){
            cout<< " ram is youngest";
        }
        else{
            cout<< " ajay is youngest";
        }
    }
    if(shyam<ram){  // ram can not be youngest
        if(shyam<ajay){
            cout<<" shyam is youngest ";
        }
        else{
            cout<< " ajay is youngest ";
        }

    }
}