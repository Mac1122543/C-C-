#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout << "enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

    if(a>b)
    {
        cout<<"a is greater than b ie."<<" "<<a<<">"<<b<<endl;
    }
    else if(b>a){
        cout<<"b is greater than a ie."<<" "<<b<<">"<<a<<endl;
    }
    else{
        cout << "both are equali.e"<<a<<"="<<b<<endl;
    }

    return 0;


    }