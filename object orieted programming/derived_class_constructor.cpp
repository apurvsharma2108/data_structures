#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x){
        a=x;
        cout<<"A class Constructor intiliszed "<<endl;
    }
    void dispa(){
        cout<<"value of a is "<<a<<endl;
    }
};
class B{
    int b;
    public:
    B(int y){
        b=y;
        cout<<"B class Constructor intiliszed "<<endl;
    }
    void dispb(){
        cout<<"value of b is "<<b<<endl;
    }

};

class c: public B,public A{
    int m;
    public:
    c(int x,int y, int z) : A(x),B(y) 
    {  //derived class constructor
        m=z;
        cout<<"c class Constructor intitilixed "<<endl;
    }
    void dispm(){
        cout<<"Value of m "<<m;
    }       
};

int main(){
     c obj(10,20,30);
     obj.dispa();
     obj.dispb();
     obj.dispm();
}
