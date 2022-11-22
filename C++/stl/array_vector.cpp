#include <iostream>
#include<vector>


using namespace std;
int main(){
    int n;
    vector<int>v;

    vector<int> a(5,1); //intialize 1 to a vector of size 5 
    
    cout<<"vector a is "<<endl;

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // to copy all elements in another vector
    vector<int>last=a;
    
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;


    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

     // to access a element
    cout<<v.at(2)<<endl;
    
    // to access front and back
    cout<<"front is "<<v.front()<<endl;
    cout<<"back is "<<v.back();
    cout<<endl;

    // to remove from back

    cout<<"before popping ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after popping ";
    for(int i:v){
        cout<<"apurv look here"<<v[i]<<" ";
    }
    cout<<endl;
//-------------------------------------------------


}