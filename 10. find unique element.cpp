#include<iostream>
using namespace std;

void find_duplicates(int arr[], int size) {
    int ans = 0;

    // Step 1: XOR all elements of the array
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }

    // Step 2: XOR numbers from 1 to size-1
    for (int i = 1; i < size; i++) {
        ans = ans ^ i;
    }
}



int main()
{
    int arr[7]={2,3,7,2,3,7,4};

    find_duplicates(arr,7);

    return 0;
    
}