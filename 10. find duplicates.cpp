#include<iostream>
using namespace std;

void find_duplicates(int arr[], int size)
{
    int ans = 0;

    for (int i = 0 ;i<size;i++)
    {
        ans = ans^arr[i];
    }

    for(int i = 1;i<size;i++)
    {
        ans = ans^i;
    }
}

int main()
{
    int arr[7]={3,5,3,7,9,4,2};
}