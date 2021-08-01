#include <iostream>
using namespace std;
int main()
{
    int n,y=1,s=0;
    cout<<"Enter a number"<<n;
    cin>>n;
    cout<<"0"<<endl;
    for(int i=0;  i<n;)
    {
    s=i+y;
    y=s;
    i=s-i;

    cout<<s<<endl;
    }
}
