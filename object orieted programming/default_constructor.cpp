#include <iostream>
using namespace std;
class test{
    int x,y;
    public:
    test(){     //default constructor
        x=10;
        y=20;
    }
    void disp(){
        cout<<"a is "<<x<<endl;
        cout<<"b is "<<y<<endl;
    }
};
int main(){
    test t;
    t.disp();
    return 0;
}

 // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created