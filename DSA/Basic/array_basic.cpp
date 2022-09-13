#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
#include <limits.h>
using namespace std;

int get_max(int arr[] , int sz)
{
    int max = INT_MIN;

    for (int i = 0;i<=sz-1;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    return max;
}

int get_min(int arr[] , int sz)
{
    int min = INT_MAX;

    for (int i=0;i<=sz-1;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    return min;
}
int main()
{
    // int n[10];

    // for (int i =0;i<=10;i++)
    // {
    //     cout<<" "<<n[i]<<" ";
    // }
    
    // int a2[3] = {1,13,131};

    // for (int i =0;i<=2;i++)
    // {
    //     cout<<" "<<a2[i]<<" ";
    // }

    int sz;
    cout<<"Enter Size";
    cin>>sz;

    int arr[100];

    for(int i =0;i<=sz-1;i++)
    {
        cin>>arr[i];
    }

    cout << " The Max value is "<<get_max(arr,sz)<<endl;
    cout << " The MIN value is "<<get_min(arr,sz);
}