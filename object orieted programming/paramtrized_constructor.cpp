#include <iostream>
using namespace std;
class test{
    int a,b;
    public:
    test(int x,int y){     //default constructor
        a=x;
        b=y;
    }
    void disp(){
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
    }
};
int main(){
    test t(100,200);
    t.disp();
    return 0;
}