#include<iostream>
#include<algorithm>
using namespace std;

// Function to check if it is possible to place cows with the given minimum distance
bool is_possible(int stalls[], int n, int k, int mid) {
    int cowCount = 1;  // Place the first cow in the first stall
    int lastPos = stalls[0];

    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPos >= mid) {
            cowCount++;  // Place the cow in the current stall
            if(cowCount == k) {
                return true;
            }
            lastPos = stalls[i];  // Update the position of the last placed cow
        }
    }
    return false;
}

// Function to find the largest minimum distance between cows
int aggressive_cows(int stalls[], int n, int k) {
    sort(stalls, stalls + n);  // Sort the stall positions

    int start = 0;
    int end = stalls[n-1];  // Maximum distance is the last stall
    int ans = -1;
    int mid = start + (end - start) / 2;

    // Binary search to find the maximum minimum distance
    while(start <= end) {
        if(is_possible(stalls, n, k, mid)) {
            ans = mid;  // Store the valid distance
            start = mid + 1;  // Try for a larger distance
        } else {
            end = mid - 1;  // Try for a smaller distance
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int stalls[5] = {4, 2, 1, 3, 6};  // Array of stall positions
    int n = 5;  // Number of stalls
    int k = 2;  // Number of cows

    // Output the largest minimum distance
    cout << "Largest minimum distance: " << aggressive_cows(stalls, n, k) << endl;

    return 0;
}







// #include<iostream>
// using namespace std;

// bool is_possible(int n,int k,int stalls,int mid)
// {
//     int cowCount = 1;
//     int lastPos = stalls[0];

//     for(int i =0;i<stalls.size();i++)
//     {
//         if(stalls[i]-lastpos>=mid)
//         {
//             cowCount++;
//             if(cowCount==k)
//             {
//                 return true;
//             }
//             lastpos = stalls[i];
//         }
//     }
//     return false;
// }

// int agressive_cows(int n,int k,int stalls)
// {
//     sort(stalls.begin(),stalls.end());
//     int start = 0;
//     int maxi = -1;
//     for(int i = 0; i<stalls.size();i++)
//     {
//         maxi = max(maxi,stalls[i]);
//     }
//     int end = maxi;
//     int ans = -1;
//     int mid = start+(end-start)/2;
//     while(start<=end)
//     {
//         if(ispossible(stalls,k,mid))
//         {
//             ans = mid;
//             start = mid+1;
//         }
//         else
//         {
//             end=mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int arr[5]={4,2,1,3,6};

//     return 0;
// }