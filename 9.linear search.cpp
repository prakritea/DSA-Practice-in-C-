#include<iostream>
using namespace std;

int find_the_key(int arr[], int size, int key)
{
    bool found = false;
    for (int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
            found = true;
            cout<<"key found!" <<endl;
        }
        
    }
    // if (found)
    // {
    //     cout << "Key found!" << endl;
    // }
    // else
    // {
    //     cout << "Key is not found!" << endl;
    // }
}

int main()
{
    int arr[5] = {3,6,3,-8,9};

    int key;
    cout<<"enter the key you want: " <<endl;
    cin>>key;

    find_the_key(arr,5,key);
}