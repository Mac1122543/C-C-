#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = a + 1;

    if ((a = 3) == b)
    {

        // here this if block will execute because previously incremented  value of a in b is stored rather than new values of a
        cout << a;
    }
    else
    {
        cout << "No more ";
    }
}