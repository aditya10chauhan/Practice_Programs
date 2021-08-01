#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number of rows";
    cin>>n;
    for( i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=6-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
            cout<<endl;

    }
}
