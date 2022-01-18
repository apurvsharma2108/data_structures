#include <iostream>
using namespace std;

class A{
    int a;
    public:
    void dispa(){
        a=10;
        cout<<"Class A value is "<<a<<"\n";
    }
};

class B : public virtual A
{
private:
    int b;
public:
    void dispb(){
        b=20;
        cout<<" Class B value is "<<b<<"\n";
    }
};
class C : public virtual A
{
private:
    int c;
public:
    void dispc(){
        c=30;
        cout<<" Class C value is "<<c<<"\n";
    }
};

class D:public B, public C
{
private:
    int d;
public:
void dispd(){
    d=40;
    cout<<"class D value is "<< d<<"\n";
}
};


int main(){
    D obj;
    obj.dispa();
    obj.dispb();
    obj.dispc();
    obj.dispd();
}