#include<iostream>
using namespace std;

int main()

{
    // int a,b;
    // a=4;
    // b=8;
    // cout<<(a&b) <<endl;
    // cout<<(a|b) <<endl;
    // cout<<(~a) <<endl;
    // cout<<(a^b) <<endl;



    // cout<<(17>>2) <<endl;
    // cout<<(17>>1) <<endl;
    // cout<<(17<<2) <<endl;
    // cout<<(17<<2) <<endl;


    // int a,b =1;
    // a = 10;
    // if(++a)
    // {
    //     cout<<b;
    // }
    // else
    // {
    //     cout<<++b;
    // }


    // int a = 1;
    // int b = 2;

    // if(a-- > 0 && ++b >2)
    // {
    //     cout<<"stage1-inside if";
    // }
    // else
    // {
    //     cout<<"stage2-inside else";
    // }
    // cout<<a <<" " <<b <<endl;




    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum = 0;
    int product =1;
    int digit;
    while(n!=0)
    {
        digit=n%10;
        product = product *digit;
        sum = sum+digit;

        n=n/10;
    }
    int answer = product - sum;
    cout<< product <<endl;
    cout<< sum <<endl;
    cout<< answer;
    return answer;
}