#include<iostream>
using namespace std;
int main()
{
    int a=0,n,sum=0;
    cout<<"enter n"<<endl;
    cin>>n;
    while(a<=n)
    {
        if(a%2==0)
        {
            sum+=a;
        }
        a+=1;
    }
    cout<<"even sum is:"<<sum<<endl;
    return 0;
    }