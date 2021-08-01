#include<iostream>
using namespace std;

    void findpair(int arr[],int n,int sum)
    {
    for (int i=0; i<n-1;i++ )
    {
        for( int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum){
                cout<<"pairs found "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int sum =11;
    int n=sizeof(arr)/sizeof(arr[0]);
    findpair(arr,n,sum);
    return 0;}



