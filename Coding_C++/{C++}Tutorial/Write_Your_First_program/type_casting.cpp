#include<iostream>
using namespace std;
int main(){

    int a='a';
    cout <<"output of variable a :" << a <<endl ;
    // the 'a' stored in variable a is typecasted

    char ch=97;
    cout <<"output of variable ch:"<< ch <<endl;
    // the 97  stored in variable ch is typecasted

    char ch1=123456;
    cout << ch1 << endl;

    unsigned int a1=112,b=-112;
    cout<< a1 << endl;
    cout<< b << endl;
    // here it b will be printed as a huge number as it is unsigned and the umber we stored is negative

    int a2=21;
    cout << !a2 << endl;

}