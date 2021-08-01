#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,3,2};
    int j,k;
    int n=sizeof(arr)/sizeof(arr[0]);
                        cout<<"Repeating Elements Are";

    for(int j=0;j<=n;j++)
    {
        for(int k=j+1;k<=n;k++)
        {
            if(arr[j]==arr[k])
            {


                cout<<arr[j]<<" ";
            }
        }
    }
    return 0;
}
