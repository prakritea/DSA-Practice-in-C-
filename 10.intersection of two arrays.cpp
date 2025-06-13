#include<iostream>
using namespace std;

void intersection_elements(int arr1[],int size1,int arr2[], int size2)
{
    bool intersection_elements=false;  // Use this to track if any intersection is found
    for(int i = 0;i<size1;i++)
    {
        for (int j = 0;j<size2;j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout<<"duplicate element is: " <<arr1[i] <<endl;
                bool intersection_elements= true;
            }
        }
    }
    if(!intersection_elements)
    {
        cout<<"no duplicates found";
    }
}

// void intersection_elements(int arr1[], int size1, int arr2[], int size2)
// {
//     cout << "Intersection elements are: " << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         int element1 = arr1[i]; 
//         for (int j = 0; j < size2; j++)
//         {
//             int element2 = arr2[j];
//             if (element1 == element2)
//             {
//                 cout << element1 << " ";  // Print if they are equal
//                 break;  // Avoid printing the same element multiple times
//             }
//         }
//     }
//     cout << endl;
// }

int main()
{
    int arr1[5]={4,5,7,3,5};
    cout<< arr1;

    int arr2[5]={2,5,7,1,9};
    cout <<arr2;

    intersection_elements(arr1,5,arr2,5);
    return 0;
}