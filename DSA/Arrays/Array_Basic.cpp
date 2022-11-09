#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
#include <limits.h>
using namespace std;

int maxi(int arr[] , int size)
{
    int maxx = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>maxx)
        {
            maxx = arr[i];
        }
    }

    return maxx;
    
}
int mini(int arr[] , int size)
{
    int minn = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]<minn)
        {
            minn = arr[i];
        }
    }

    return minn;
    
}
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[10000];

    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"max is "<<maxi(arr,n);
    cout<<"min is "<<mini(arr,n);


    

    




    
    
}