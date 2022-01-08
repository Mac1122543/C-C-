#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"enter no. of rows"<<endl;
    cin>>i;
    cout<<"enter no. of coloumns"<<endl;
    cin>>j;

    a=0;
    b=0;

    while(a<i)
    {
        b=0;
        while(b<j)
        {
            cout<<"*";
            b++;
        }
        cout<<endl;

        a++;
    }




}