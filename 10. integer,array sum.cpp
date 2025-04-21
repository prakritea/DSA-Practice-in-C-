#include<iostream>
using namespace std;

void sum_of_array(int arr[],int size,int number)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum = sum+arr[i];
        if(sum==number)
        {
            cout<<"they are equal: " <<sum;
            break;
        }
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<< "the given array is: " <<arr[5] <<endl;

    int number=5;
    cout<< "the goal is: " <<number <<endl;

    return 0;
}