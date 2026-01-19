/*write a program to print all the ascii values and their equivalent characters of
 26 alphabet using loop*/
 #include<iostream>
 using namespace std;
 int main(){
    
    for(int i=65;i<=90;i++){
        cout<<i<<" - ";
        char y=(char)i;
        cout<<y<<endl;
    }
}