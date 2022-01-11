#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch ;

    cout << "enter n";
    cin>> n;
    // i=1;
    i=0;
    ch=65;

    // while(i<=n)
    while(i<n)
    {
        j=0;
        // while(j<i)
         while(j<n)
        {
            if(ch==90)
            {
                ch=65;
                cout<<ch<<" ";
            }
            else
            {
            cout<<ch<<" ";
            }
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }
    return 0;

}