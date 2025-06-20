#include<iostream>
using namespace std;

int binary_search(int n)
{
    int start = 0;
    int end = n;
    int mid = (start + (end - start))/2;
    int ans = -1;

    while(start<=end)
    {
        if (mid*mid == n)
        {
            ans = mid;
            return mid;
        }
        if (mid*mid<n)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid = (start + (end - start))/2;
    }
    return ans;
}

double precision(int n, int precision,int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for(int i = 0;i<precision;i++)
    {
        factor = factor/10;
        for(double j = ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<< "enter the value of n: " <<n <<endl;
    cin>>n;

    int tempsol = binary_search(n);
    cout << "answer is: " <<precision(n,3,tempsol);

    return 0;
}