#include<iostream>
#include<stack>
using namespace std;

/*
	push(): Used to push the element at top of the stack.
	pop(): Deletes the top element of the stack but do not returns it.
	top(): Returns the top element of the stack.
	empty(): Return boolean value, ie, True if stack is empty, else returns false.
	size(): Returns the size of the stack.
*/
void printStack(stack<char>s){
	while(s.empty()==false){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<"\n";
}

int main(){
	//Define stack
	stack<char>stk;
	
	//an array of characters
	char ch[] = {'s','u','b','h','a','s','h',' ','c','h','a','n','d','r','a'};
	for(int i= 0; i<sizeof(ch) / sizeof(ch[0]); i++){
		stk.push(ch[i]);
	}
	//Check if stack is empty or not
	if(stk.empty()==true){
		cout<<"Stack is empty"<<endl;
	}else{
		cout<<"Stack is not empty"<<endl;
	}
	//Check the size of the stack
	cout<<"Size of the stack is :"<<stk.size()<<endl;
	//Stack initially
	cout<<"Stack initially:"<<endl;
	printStack(stk);
	
	//Pop top element of the stack
	stk.pop();
	//Stack after popping last element
	cout<<"Stack after popping last element:"<<endl;
	printStack(stk);
	cout<<"Size of the stack is :"<<stk.size()<<endl;
	
	//Reversing the string
	string str = "";
	while(stk.empty()==false){
		str+=stk.top();
		stk.pop();
	}
	cout<<str<<endl;
	return 0;
}
