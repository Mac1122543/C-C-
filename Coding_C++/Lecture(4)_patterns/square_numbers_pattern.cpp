#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b;
    cout<<"enter no. of rows"<<endl;
    cin>>i;
    cout<<"enter no. of columns"<<endl;
    cin>>j;
    
    a=0;
    while(a<i)
    {
        b=0;
        while(b<j)
        {
            cout<<" "<<a;
            b++;
        }
        cout<<endl;
        a++;
    }
}