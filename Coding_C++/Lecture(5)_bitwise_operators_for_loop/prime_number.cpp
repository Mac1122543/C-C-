#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isprime=1;
    cout<<"enter n";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            // not a prime number
            break;
        }

    }

    if(isprime==1)
    {
        cout<<n<<" is prime number "<<endl;
    }else{

        cout<<n<<" is not prime number "<<endl;
    }

}