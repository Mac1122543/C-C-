#include <iostream>
using namespace std;
int main()
{
    int a, b,v;
    cout << "enter values of a and b " << endl;
    cin >> a >> b;
    // here normal cin will not read space ,tab or enter i.e. will not consider them as input but cin.get() will consider them as input
    cout << "values of a and b are"
         << " " << a << " " << b << endl;

    v=cin.get();
    cout << "value of v is:"<<v<<endl;


    

    return 0;
}