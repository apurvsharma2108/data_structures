#include<iostream>
using namespace std;
#define n 20 
class queue{
	int* arr;
	int front;
	int back;
	public:
	queue(){
		arr=new int[n];
		front=-1;
		back=-1;
	}
	void push(int x){
		if(back==n-1){
			cout<<" queue overflow "<<endl;
			return;
		}
		arr[back++]=x;
		if(front==-1){
			front++;
		}
	}
	void pop(){
		if(front==-1 or front>back){
			cout<<" queue underflow "<<endl;
			return;
		}
		front++;
	}
	int peek(){
		if(front==-1 or front>back){
			cout<<" queue underflow "<<endl;
			return-1;
		}
		return(arr[front]);
	}
	bool isempty(){
		if(front==-1 or front>back){
			cout<<" queue underflow "<<endl;
			return true;
		}
		return false;
	}
};
int main(){
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.isempty()<<endl;
	
}
