#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter value of ch" << endl;
    cin >> ch;
    if (ch>=97 && ch<=122){
        cout<<"ch is lowercase:"<<ch;
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"ch is upper case:"<<ch;
    }
    if(ch>=48 && ch<=57)
    {
        cout<<"ch is numeric:"<<(ch);
    }
    return 0;

}