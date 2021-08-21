#include <iostream>
using namespace std;

class test{
    int roll;
    float per;
    
    public:
    void getdata(int x,float y);
    void showdata(){
        cout<<"Roll no is "<<roll<<endl;
        cout<<"Per is "<<per<<endl;
    }
};

void test :: getdata(int x,float y){    
    roll=x;
    per=y;
}

int main(){
     test t;
     t.getdata(12,98);
     t.showdata();
}