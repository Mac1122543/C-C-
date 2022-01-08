#include<iostream>
using namespace std;
int main(){
    int a = 123;
    float b=1.2;
    
    // Note we can not assign two characters in char(data type variable)
    char ch='v';
    double d=4.2365;
    
    cout << "size of ch:" << sizeof(ch) << endl;
    cout << "size of b:" << sizeof(b) << endl;
    cout << "size of a:" << sizeof(a) << endl;
    cout << "size of d:" << sizeof(d) << endl;

    }