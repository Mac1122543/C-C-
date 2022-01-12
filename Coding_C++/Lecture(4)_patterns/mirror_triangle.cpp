#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space;
    cout<<"enter n";
    cin>>n;
    
    i=1;
    while(i<=n)
    {
        space=n-i;
        j=0;
        while(space>0)
        {
            cout<<" ";
            space--;
        }
        while(j<i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}