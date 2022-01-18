// A class containing 1 pure virtual function is called abstract class
// objects for abstract classess cannot be created
#include <iostream>
using namespace std;

class Base{
    public:
    virtual void disp()=0;//pure virtual function
    
};

class D:public Base{
    public:
    void disp(){
        cout<<"derived class "<<endl;
    }
};

int main(){
     D obj;
     obj.disp(); 
     Base *ptr;
     D obj1;
     ptr=&obj1;
     ptr->disp();

}               