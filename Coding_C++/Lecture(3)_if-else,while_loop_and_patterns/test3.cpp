#include<iostream>
using namespace std;
int main()
{
    int a=24;

    if(a>20)
    {
        // here only this block will be executed as it is true and it has else conditions
        cout <<"a is greater";

    }
    else if(a==24)
    {
        cout << "a is 24";

    }
    else{
        cout << "a is no more";
    }

    return 0;

}