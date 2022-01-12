#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space,k;
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

        j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        j-=2;
        
        while(j>0)
        {
            cout<<j;
            j--;
        }    
        cout<<endl;
        


        i++;
    }

}
