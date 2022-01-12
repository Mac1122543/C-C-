#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space,star,k;
    cout<<"enter n";
    cin>>n;
    i=n;
    while(i>0)
    {
        j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        
        star=n-i;
        while(star>0)
        {
            cout<<"*"<<" ";
            star--;
        }

        space=n-i;
        while(space>0)
        {
            cout<<"*"<<" ";
            space--;
        }
        k=i;
        
        while(k>0)
        {
            cout<<k<<" ";
            k--;
        }

        cout<<endl;

        i--;
    }
}