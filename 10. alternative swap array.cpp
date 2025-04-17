#include<iostream>
using namespace std;

void alternative_swap(int arr[5], int size)
{
    for (int i=0;i<5;i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void print_array(int arr[5],int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<"the alternative array is: " <<arr[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {4,7,9,0,1};
    int arr2[6] = {2,6,4,9,7,2};

    alternative_swap(arr,5);
    print_array(arr,5);

    alternative_swap(arr2,6);
    print_array(arr2,6);

    return 0;
}