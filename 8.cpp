#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers";
    cin>>a>>b>>c;
    if(a>b && b>c)
    {
        cout<<"largest number is"<<a;
    }
    else if(a<b && b>c)
    {
        cout<<"largest number is"<<b;

    }
    else
        cout<<"largest number is"<<c;
}

