#include <iostream>
using namespace std;

class test{
    int count = 0;
    public:
    test(){
        count++;
        cout<<count<<" object created "<<endl;
    }

    ~test(){    
        cout<<count<<" object destroyed "<<endl;
        count--;
    }
};

int main(){
     cout<<"main blck "<<endl;
     test t1;
     {
         cout<<"Block 1"<<endl;
         test t2,t3;
         cout<<"Exit block 1 "<<endl;
     }
     cout<<"Exit form 1 "<<endl;    
}
