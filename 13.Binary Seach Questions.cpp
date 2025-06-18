#include<iostream>
using namespace std;

int first_occurance(int arr[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+(end-start))/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(key>mid)
        {
            start=mid+1;
        }
        else if(key<end)
        {
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int last_occurance(int arr[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+(end-start))/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(key>mid)
        { 
            start=mid+1;
        }
        else if(key<end)
        {
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1,2,3,3,5};
    cout<< first_occurance(arr,5,3);
    cout<< last_occurance(arr,5,3);
    return 0;
}