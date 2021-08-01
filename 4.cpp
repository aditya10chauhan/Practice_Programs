#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
        cout<<"the value of a before swapping="<<a<<"the value of b before swapping"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a;
    cout<<b;

}

