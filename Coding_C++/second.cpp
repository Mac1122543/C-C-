#include<iostream>
using namespace std;
int main(){
    string firstname,lastname;

    cout<<"Enter your first name: ";
    cin>>firstname;
    cout<<"Enter your last name: ";
    cin>>lastname;

    cout<<"your full name is "<< "["+lastname+"]"+" "+"["+firstname+"]";
    return 0;
}