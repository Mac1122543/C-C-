#include<iostream>
using namespace std;
int main()
{
    int a=9;

    // here both if block will be executed as one of the block dont have else conditions
    if(a==9)
    {
        cout<<"Niney"<<endl;
    }

    if(a>0)
    {
        cout<< "a is greater than 0"<<endl;
    }
    else
    {
        cout<< "negative";
    }


}