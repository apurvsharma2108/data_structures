#include <iostream>
using namespace std;
class time{
    int h,m;
    public:
    void gettime(int,int);
    void showtime(void);
    void sum(time,time);    //when we want to pass object we write class name in datatype
};

void time :: gettime(int x,int y){
    h=x;
    m=y;
}
void time :: showtime(void){
        cout<<"Hour: "<<h<<endl;
        cout<<"minute: "<<m<<endl;

}
void time :: sum(time t1,time t2){ //passing objects
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}


int main(){
     time t1,t2,t3;
     t1.gettime(3,40);
     t2.gettime(4,30);
     t3.sum(t1,t2);
     t1.showtime();
     t2.showtime();
     t3.showtime();
     return 0;
}