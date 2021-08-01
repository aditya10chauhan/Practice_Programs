#include <iostream>
using namespace std;
int main()
{
    int n,max,min,i;
    cout<<"Enter total numbers ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];

    }
    min=arr[0];
    max=arr[0];

    for(int i =0; i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
           max=arr[i];
    }}
    cout<<"maximum number"<<max<<endl;
    cout<<"minimum number"<<min;
    return 0;
}
