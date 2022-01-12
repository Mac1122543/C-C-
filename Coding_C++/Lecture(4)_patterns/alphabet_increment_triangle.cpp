#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch=65;
    cout<<"enter n";
    cin>>n;
    i=1;
    while(i<=n)  
    {
        j=0;
        while(j<i)
        {
           
            cout<<ch++;
            j++;

        }

        cout<<endl;
        
        
        i++;
    }
}