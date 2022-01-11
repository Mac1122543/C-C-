#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter n";
    cin>>n;
    i=1;

    while(i<=n)
    {
        j=0;
        while(j<i)
        {
            cout<<i-j;
            j++;
        }
        cout<<endl;
        i++;

    }
}