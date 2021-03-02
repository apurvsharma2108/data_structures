# include<iostream>

using namespace std;

int * insertion(int n, int a[], int ele, int pos){
    n + +;
for (int i=n;i >= pos;i--)
{
    a[i] = a[i - 1];
}
a[pos - 1] = ele;
return a;
}

// main function - 
// where the execution of program begins
int main()
{
int
n, pos, ele;
cout << "enter the size";
cin >> n;
int a[100];
cout << "enter the elements";
for (int i=0;i <= n-1;i++){
    cin >> a[i];
}
cout << "enter the element";
cin >> ele;
cout << "enter the pos";
cin >> pos;
insertion(n, a, ele, pos);
for (int i=0;i <= n;i++){
    cout << endl << a[i];
}
}
