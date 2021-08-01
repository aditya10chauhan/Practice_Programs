#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the value of n";
    cin>>n;
    for (int i=0; i<=n; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
        else
            continue;
    }

}
