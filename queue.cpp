#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<int>q){
	while(q.empty()==false){
		cout<<q.front()<<" ";
		q.pop();
	}
}
/*
	push(): Used to push the element at back of the queue
	pop(): Deletes the front element of the queue but does not return it.
	front(): Returns the front element of the queue, or the element that is first in the line.
	back(): Returns the last element of queue.
	empty(): Return boolean value, ie, True if queue is empty, else returns false
	size(): Returns the size of the queue.
*/
int main(){
	queue<int>que;
	for(int i = 1; i<=10; i++){
		que.push(i);
	}
	//Initially queue is 
	printQueue(que);
	//Initially size of the queue
	cout<<"Initially size of the queue :"<<que.size()<<endl;
	
	cout<<"Front of the queue is :"<<que.front()<<endl;
	cout<<"Back elemenet of the queue is :"<<que.back()<<endl;
	que.pop();
	cout<<"after poping the 1st element, size of the queue :"<<que.size()<<endl;
	//Check if queue is empty
	cout<<"Queue is empty :"<<que.empty()<<endl;
	
	return 0;
}
