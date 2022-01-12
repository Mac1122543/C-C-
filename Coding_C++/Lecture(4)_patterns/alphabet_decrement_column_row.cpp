#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch=65,chin;
    cout<<"enter n";
    cin>>n;
    i=1;
    ch=ch+n;
    // cout<< x;
    while(i<=n)
    {
        j=0;
        while(j<i)
        {
            chin=ch-i+j;
            cout<<chin;
            j++;
        }
        cout<<endl;
        i++;
    }

}