#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c;
    cout <<"enter n";
    cin>>n;
    c=0;
    
    i=0;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<" "<<c;
            c++;
            j++;
        }
        
        cout<<endl;
        i++;

    }
}