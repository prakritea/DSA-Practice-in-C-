#include<iostream>
using namespace std;

int main()
{
    int num=1;
    cout<<"enter the number: " <<endl;

    if (num > 0 && (num & (num - 1)) == 0)
    {
        cout<<"this is the power of x";
    }

    else
    {
        cout<<"this is not the power of x";
    }
       
}





// #include<iostream>
// using namespace std;

// bool isPowerOfTwo(int num)
// {
//     // Start with 1 and keep multiplying by 2
//     int power = 1;
    
//     // Check all powers of 2 up to the number
//     while (power < num)
//     {
//         power *= 2;
//     }

//     // If power matches the number, it's a power of 2
//     return power == num;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num > 0 && isPowerOfTwo(num))
//     {
//         cout << num << " is a power of 2." << endl;
//     }
//     else
//     {
//         cout << num << " is not a power of 2." << endl;
//     }

//     return 0;
// }
