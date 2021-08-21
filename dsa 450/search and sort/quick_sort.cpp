#include <iostream>
using namespace std;

int partition(int *a, int start,int end){
    int pivot=a[end];
    int p_index=start;
    for(int i=start;i<end;i++){
        if (a[i]<=pivot){
            swap(a[i],a[p_index]);
            p_index++;
        }
    }
    swap(a[p_index],a[end]);
    return p_index;

}

void quicksort(int *a ,int start , int end){
    if(start<end){
        int p_index=partition(a,start,end);
        quicksort(a,start,p_index-1);
        quicksort(a,p_index+1,end);
    }
}
int main(){
     int a[]={7,6,5,4,3,2,1,0};
     quicksort(a,0,7);
     for(int i=0;i<8;i++){
         cout<<a[i];
     }
}