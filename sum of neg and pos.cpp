#include <iostream>
using namespace std;
int main()
{
    int arr[6],sum=0,i;
    cout<<"Enter the number ";
    for(int i =0;i<6;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum is"<<sum;
    return 0;
}
