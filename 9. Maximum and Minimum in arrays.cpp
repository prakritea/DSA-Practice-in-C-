#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0;i<size;i++)
    {
        if(arr[i] > min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<"enter the size: " <<endl;  //user input is actually a variable
    cin>>size;  //tell the size of the array

    int arr[100];
    //taking array as an input
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<< "maximum value is: " <<getMax(arr,size) <<endl;
    cout<< "minimum value is: " <<getMin(arr,size) <<endl;

    return 0;
}