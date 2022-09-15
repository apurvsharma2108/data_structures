#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
using namespace std;

void check(int arr[] , int n)
{
    // if we change a value inside function it is also changed in main functions array
    arr[0]=4;
    cout<<" Inside Check "<<endl;
    for(int i =0;i<=2;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;

    int arr[3] = {1,2,3};
    check(arr,3);

    cout<<" Main Function Array"<<endl;
    for(int i =0;i<=2;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}