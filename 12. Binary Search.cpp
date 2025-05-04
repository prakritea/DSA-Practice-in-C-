#include<iostream>
using namespace std;

int Binary_Search(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            //right part
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int key;
    cout<<"enter the key: ";
    cin>>key;

    int arr_odd[7]={2,3,4,5,6,7,8};
    int arr_even[8] = {2,3,4,5,6,7,8,9};

    int evenIndex = Binary_Search(arr_odd,7,key);
    cout<<"Index is: " <<evenIndex;
    Binary_Search(arr_even,8,key);

}
