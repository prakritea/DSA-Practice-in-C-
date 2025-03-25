#include<iostream>
using namespace std;

int main()
{
    // int a;
    // cin>>a;
    // if (a>0)
    // {
    //     cout <<"a is positive" <<endl;
    // }
    // else{
    //     cout <<"a is negetive"<<endl;
    // }



    //  int a,b;
    // cin>> a >> b;
    // cout<<"value of a and b is: "<<a <<b <<endl;

    // int c;
    // c = cin.get();
    // cout<<"value of a is: "<<c <<endl;



    // int a,b;
    // cout<<"enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"enter the value of b: "<<endl;
    // cin>>b;

    // if(a>b)
    // {
    //     cout<<"a is greater" <<endl;
    // }
    // else if(a<b)
    // {
    //     cout<<"b is greater" <<endl;
    // }
    // else
    // {
    //     cout<< "they both are equal" <<endl;
    // }



    // int a = 2;
    // int b = a+1;

    // if((a=3)==b)
    // {
    //     cout<<a;
    // }
    // else
    // {
    //     cout<<a+1;
    // }



    // while loop
    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n)
    // {
    //     cout<<i<<" ";
    //     i = i+1;
    // }



    // int n,sum,i;
    // cout <<"enter the number: ";
    // cin>>n; //taking n as an input
    // sum=0;
    // i=1;
    // while(i<n)
    // {
    //     sum=sum+i;
    //     cout<< sum <<endl;
    //     i++;
    // }



    int n,i;
    cout<<"enter the number: " <<endl;
    cin>>n;
    i=0;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"it is not a prime number" <<endl;
        }
        else
        {
            cout<<"it is a prime number" <<endl;
        }
        i=i+1;
    }
}