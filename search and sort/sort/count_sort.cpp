#include <bits/stdc++.h>
using namespace std;
int countSort(int a[],int n,int max){
	int count[max+1]={0};
	int b[n];
	for (int i=0;i<=n-1;i++){
		count[a[i]]++;
	}
	for(int i=1;i<=max;i++){
		count[i]=count[i]+count[i-1];
	}
	for(int i=0;i<=n-1;i++){
		b[--count[a[i]]]=a[i];
	}
	for(int i=0;i<=n-1;i++){
		a[i]=b[i];
	}
	
}

int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	int a[n];
	int max=INT_MIN;
//	int a[]={10,9,8,7,6,5,4,3,2,1};
	cout<<"Enter numbers";
	for (int i=0;i<=n-1;i++){
		cin>>a[i];
		if (a[i]>max){
			max=a[i];
		}
	}
	countSort(a,n,max);
	for (int i=0;i<=n-1;i++){
		cout<<a[i]<<endl;
	}
}
