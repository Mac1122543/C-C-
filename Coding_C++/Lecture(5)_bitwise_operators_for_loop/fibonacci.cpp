#include<iostream>
using namespace std;
int main()
{
    float a=0,b=1,n;

    cout<<"enter number"<<endl;
    cout<<a<<" "<<b<<endl;
    cin>>n;
    for (float i=1;i<=n;i++)
    {
        float nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }

}