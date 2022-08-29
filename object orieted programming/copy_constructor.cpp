#include <iostream>
using namespace std;
class test{
    int code;
    float price;
    public:
    test();
    test(int c,float p);
    test(const test &t);
    void disp();
};
test :: test()
{
    code =0;
    price = 9;
}

test :: test(int c,float p){
    code=c;
    price=p;
}

test :: test(const test &t){
    cout<<"Copy constructor called "<<endl;
    code=t.code;
    price=t.price;
    
}
void test :: disp(){
    cout<<"Code is "<<code<<endl;
    cout<<"Price is "<<price<<endl; 
}
int main(){
    test t1(101,50.6);
    test t2(t1);
    test t3=t2;
    test t4;
    t4 = t1;

    cout<<"t1 object"<<endl;
    t1.disp();
    cout<<"t2 object"<<endl;
    t2.disp();
    cout<<"t3 object"<<endl;
    t3.disp();
    t4.disp();
}