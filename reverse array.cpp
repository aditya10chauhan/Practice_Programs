#include<iostream>
using namespace std;
int main()
{
  int n;
   int arr[50],temp;
    int i,j;
    cout<<"Enter array size";
    cin>>n;
    cout<<"Enter array element";
    for (int i=0;i<=n;i++)
    {
        cin>>arr[i];

    }
    i=0;
    j=n-i;
    while(i>j)
        {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;

        i++;
        j--;}
        cout<<"Reverse of an array is";
        for(int i=0;i<=n;i++)
        {
            cout<<arr[i]<<" ";

    }

    return 0;

    }

