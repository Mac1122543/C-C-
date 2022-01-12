#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n";
    cin>>n;
    i=n;
    while(i>0)
    {
        j=i;
        while(j>0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;

        i--;
    }

}