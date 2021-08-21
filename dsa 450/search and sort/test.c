#include <iostream.h>
int f(int num){
        return num*5;
}
int main(){
     int i=3,val;
    val=sizeof (f(i)+ +f(i=1)+ +f(i-1));
    printf("%d %d",val,i);   
}