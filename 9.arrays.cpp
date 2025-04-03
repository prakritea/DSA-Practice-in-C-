#include<iostream>
using namespace std;


void printarray(int arr[],int size)
{
    cout<<"printing the array..." <<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<"printing done" <<endl;
}


void printcharacterarray(char arr[],int size)
{
    cout<<"printing the array..." <<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<"printing done" <<endl;
}
int main()
{
    // int arr[5];
    // cout<<"values at index 1 is" <<arr[1] <<endl;



    // int arr2[]={2,3,6,2,4,65};
    // cout<<arr2[3] <<endl;



    // int number[15];
    // //accessing an array
    // cout<<"value at 14 index" <<number[14];

    // //initializing an array
    // int second[3] = {3,4,1};



    // int third[15]={5,7}; //printing the array
    // int i,n = 15;
    // for(i=0;i<n;i++) //here i=index
    // {
    //     cout<<third[i] << " ";
    // }
    


    // int fourth[10]={0};
    // int i,n = 10;
    // for(i=0;i<n;i++) //here i=index
    // {
    //     cout<<third[i] << " ";
    // }



//__________________________________________________________________________________________________________________



    //function printarray part
    int third[15]={3,4,6};
    int n = 15;
    printarray(third,n);


    int fourth[10]={0};
    n = 10;
    printarray(fourth,n);


    int fifth[13]={2,7};
    n = 13;
    printarray(fifth,n);



//__________________________________________________________________________________________________________________



    //different types of array
    char c[5]={'a','h','g','s','p'};
    n = 5;
    cout<<"printing the array..." <<endl;
    printcharacterarray(c,n); 
    return 0;
}