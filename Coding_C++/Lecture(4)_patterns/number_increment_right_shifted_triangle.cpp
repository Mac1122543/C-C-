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
        while(space>0)
        {
            cout<<" ";
            space--;
        }

        j=0;
        while(j<i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}


