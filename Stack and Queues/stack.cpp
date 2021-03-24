#include<iostream>
using namespace std;
class stack{
	private:
		int a[100];
		int top;
	public:
		stack(){
			top= -1;
		}
		void push(int x){
			if(top==a[100]-1){
				cout<<"overflow condition"<<endl;
			}
			a[++top]=x;	
		}
		void pop(){
			if(top==-1){
				cout<<"underflow condition"<<endl;
			}
			top--;
		}
		void print(){
			cout<<"stack is "<<endl;
			for(int i=0;i<=top-1;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main(){
	stack s;
	s.push(2);s.print();
	s.push(3);s.print();
	s.push(4);s.print();
	s.push(5);s.print();
}
