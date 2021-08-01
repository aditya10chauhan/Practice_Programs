#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int i ,a,b;
    int k=9;

    int hash[9]={0};
    for (int i=0; i<9;i++)
    {
        hash[i]=0;
    }
    for (i=0;i<9;i++)
    {
        hash [arr[i]]=1;

    for (i=0;i<arr[8];i++){

        if(hash[k-arr[i]==1] && k-arr[i]<=8)
        a=arr[i];
        b=k-arr[i];

        cout<<"("<<a<<","<<b<<")"<<endl;
    }}
     }



