#include<iostream>
#include<vector>
using namespace std;
/*
Vector is a dynamically allocated array datastructor 
	Most common functions
	push_back(): Used to push the element at the end of the vector. For faster method, use emplace_back().
	pop_back(): Used to remove the last element from the vector.
	size(): Returns the size of the vector.
	clear(): Deletes all the content of the vector.
	erase(): Deletes the specified index or data.
	empty(): Returns boolean value True if vector is empty, else returns False.
*/
void printVector(vector<int>v){
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	//Define a vector
	vector<int>vec;
	//Put numbers from 1 to 10 in the vector
	for(int i = 1; i<=10; i++){
		vec.push_back(i);
	}
	cout<<"Vector initially"<<endl;
	printVector(vec);
	//Print the size of the vector
	cout<<"The size of the vector is :"<<vec.size()<<endl;
	//Check if the vector is empty or not
	if(!vec.empty()){
		cout<<"Vector is not empty"<<endl;
	}else{
		cout<<"Vector is empty"<<endl;
	}
	
	//pop an element from the back of the vector
	vec.pop_back();
	cout<<"Vector after popping the 1st element from the vector"<<endl;
	printVector(vec);
	
	//Delete an element from the start of the vector
	vec.erase(vec.begin());
	cout<<"Vector after erase 1st element"<<endl;
	printVector(vec);
	
	//clear the vector
	vec.clear();
	if(vec.empty()==true){
		cout<<"Vector is empty now!!"<<endl;
	}
	cout<<"Size of vector after clearing all element "<<vec.size()<<endl;
	
}
