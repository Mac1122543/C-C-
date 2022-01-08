#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter i"<<endl;
    cin>>i;

    bool c;
    c=(i%n==0);
    cout<<"c is  and imodn is "<< c <<" "<<i%n<<endl;
    return 0;

}