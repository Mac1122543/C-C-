#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"enter i";
    cin>>i;
    cout<<"enter b";
    cin>>b;

    a=0;
    while(a<i)
    {
          j=b;
        while(j>0)
        {
            cout<<j;

          j--;
        }
        cout <<endl;
        a++;

    }
}