#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space;
    cout<<"enter n";
    cin>>n;
    i=n;
    while(i>0)
    {
        space=n-i;
        while(space>0)
        {
            cout<<" ";
            space--;
        }
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