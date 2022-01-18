#include <iostream>
using namespace std;

class A
{

public:
    virtual void disp()=0;
};

class B: public A{
    int val1;
    public:
    B(int x)
    {
        val1=x;
    }

    void disp(){
        cout<<"val 1 in class B "<<val1<<endl ;
    }

};
class C: public A{
    int val2;
    public:
    C(int x)
    {
        val2=x;
    }

    void disp(){
        cout<<"val 2 in class C "<<val2<<endl;
    }

};


int main(){
     A * bp;
     B objb(100);
     C objc(200);
     bp=&objb;
     bp->disp(); // B class function will execute
     bp=&objc;
     bp->disp(); // C class function will execute

     // another method
     A *bptr[2];
     B objq(300);
     C objr(400);
     bptr[0]=&objq;
     bptr[1]=&objr;
     bptr[0]->disp();
     bptr[1]->disp();



        
}