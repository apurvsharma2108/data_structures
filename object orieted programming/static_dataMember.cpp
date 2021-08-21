#include <iostream>
using namespace std;

class std{
    int no;
    static int count;
    public:
    void setno(void);
    void dispno();
    static void dispcount(void);
};
void std  :: setno(void){
    no=++count;
}
void std :: dispno(void){
    cout<<"object no "<<no;
}

void std :: dispcount(void){
    cout<<"counter is "<<count<<endl;
}

int std :: count ;

int main(){
     std t1,t2;
     t1.setno();
     t2.setno();

     
}