#include<iostream>
using namespace std;
void bubble_sort (int arr[] , int n)
{
    int round , i , temp;
        for (int round =0; round<=n-1;round++)
        {
            for(int i =0 ;i<=n-1-round;i++)
            {
                    if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }}}
    }

int main()
{
    int arr[]={2,5,11,12,7,9,8,4,10,6,1,3};

    bubble_sort(arr,12);
            int i , l , r;
    int k =13;
        l=0;
        r=11;


        while(l<=r)
        {
            if(arr[l]+arr[r]>k){
                r--;}

               else if(arr[l]+arr[r]<k){
                l++;

        }

        else if(arr[l]+arr[r]==k){
            cout<<"("<<arr[l]<<","<<arr[r]<<")"<<endl;
            l++;}

    }}






