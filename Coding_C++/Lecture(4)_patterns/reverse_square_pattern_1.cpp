#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    
    cout<<"enter n";
    cin>>n;
    
    
   


    i=0;
    while(i<n)
    {
        j=0;
        
        while(j<n)
        {
            cout<<n-j;
            // cout<<n-i;
            j++;
        }
        cout<<endl;
        i++;
    }
}