
/*pointers: access the value of varuiable whose address is in the pointer using deference
 /* operator
*/

#include<iostream>
using namespace std;
int main(){
    int x=2;
    int* p = &x;//pointer 
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;//*p access the value of variable
}
