#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i , temp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++)


    {
        if(i%2==0)
        {
            {
                if(arr[i]<arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        else{

            if((i%2)!=0)
            {
                if(arr[i]>arr[i+1])
                {
                    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
                }
            }
        }}
        for(int i=0;i<n;i++)

            cout<<arr[i]<<",";



    return 0;

}
