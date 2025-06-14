#include<iostream>
using namespace std;

int left_occurance(int arr[],int size,int key)
{
    int start=0;
    int end = size-1;
    int mid = (start+(end-start))/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start =mid+1;
        }
        mid = (start+(end-start))/2;
    }
    return ans;
}

int right_occurance(int arr[],int size,int key)
{
    int start=0;
    int end = size-1;
    int mid = (start+(end-start))/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start =mid+1;
        }
        mid = (start+(end-start))/2;
    }
    return ans;
}

int main()
{
    int arr[8]={1,2,3,3,3,3,4,5};

    int occurance = right_occurance(arr,8,3) - left_occurance(arr,8,3) + 1;

    cout<<"NO. of occurance: " <<occurance <<endl;
    return 0;
}