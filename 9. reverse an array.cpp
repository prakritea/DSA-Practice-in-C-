#include<iostream>
using namespace std;

void print_array(int arr[],int size)
{
    for(int i = 0; i<size ; i++)
    {
        cout << arr[i];
    }
    cout<< endl;
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
}

int main()
{
    int arr[10] = {2,4,6,3,1,3,5,3,9,0};
    int arr2[5] = {2,6,9,0,4};

    reverse(arr,10);
    reverse(arr2,5);

    print_array(arr,10);
    print_array(arr2,5);

    return 0;


}