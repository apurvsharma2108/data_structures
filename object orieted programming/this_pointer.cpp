#include <iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(int a){
        this->a=a;
        
    }
    void getdata(){
        cout<<"the vslue of a is "<<a<<endl;

    }
};

int main(){
    // this is a keyword which points to the object which
    //invokes the member function

     A a;
    a.setdata(3);
    a.getdata();
}