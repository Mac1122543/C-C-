#include <iostream>
using namespace std;
int main()
{
    int i, n, u;
    int c;
    cout << "enter n";
    cin >> n;
    for (i = 3; i <= n; i++)
    {
        for (u = 2; u <i; u++)
        {
           c=1;
            
            if (i%u==0)
            { 
               c=0;
                break;
            }
            
            
        }
        if (c==1)
        {
            cout<<i<<endl;
        }
    }
}