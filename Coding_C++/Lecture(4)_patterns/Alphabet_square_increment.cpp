#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cout<<"enter n";
    cin>>n;
    i=0;
    ch=65;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;

        i++;

    }

}