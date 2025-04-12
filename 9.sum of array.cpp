#include<iostream>
using namespace std;

int sum_of_array(int arr[],int size)
{
    int sum = 0;
    for (int i = 0;i<size;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"enter the size of your array: " <<endl;
    cin>>size;

    int arr[size];
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"sum of the given array is: " <<sum_of_array(arr,size) <<endl;
}