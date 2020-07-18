#include<iostream>
#include<set>
using namespace std;
/*
 Sets are associative containers in which each element is unique. 
 The elements cannot be modified once inserted in the set.
	-> Increasing order: set<Data type> variable_name;
	-> Decreasing order :set<Data type, greater<Data type> > variable_name; 
Functions
	insert(): This function is used to insert a new element in the Set.
	begin(): This function returns an iterator to the first element in the set.
	end(): It returns an iterator to the theoretical element that follows the last element in the set.
	size(): Returns the total size of the set.
	find(): It returns an iterator to the searched element if present. If not, it gives an iterator to the end.
	count(): Returns the count of occurrences in a set. 1 if present, else 0.
	empty(): Returns boolean value, ie, true if empty else false.
*/
void print_min(set<int>s){
	cout<<"Min set :"<<endl;
	set<int>::iterator itr; 
    for (itr = s.begin(); 
         itr != s.end(); ++itr) { 
        cout << *itr << " "; 
    } 
    cout << endl;
}
void print_max(set<int, greater<int> >s){
	cout<<"Max set :"<<endl;
	set<int>::iterator itr;
	for(itr = s.begin(); itr!=s.end();++itr){
		cout<<*itr<<" ";
	}
	cout<<endl;
}

int main(){
	 set<int> min_set; 
  
    // stores values in decreasing order 
    set<int, greater<int> > max_set; 
	//Check for empty set
	if(min_set.empty()==true){
		cout<<"Set is empty"<<endl;
	}else{
		cout<<"Set is not empty"<<endl;
	}
	//For max set
	if(max_set.empty()==true){
		cout<<"Set is empty"<<endl;
	}else{
		cout<<"Set is not empty"<<endl;
	}
	
	//inserting elements into the set
	for(int i = 0; i<10; i++){
		min_set.insert(i);
		max_set.insert(i);
	}
	
	print_min(min_set); 
    print_max(max_set);
    
	//Size of the set
	cout<<"Size of the min_set:"<<min_set.size()<<endl;
	cout<<"Size of the max_set:"<<min_set.size()<<endl;
	//Find an element in set
	cout<<"5 is at index in min_set:"<<*min_set.find(5)<<endl;
	cout<<"87 is not in the set so it will point to the last itr:"<<*max_set.find(87)<<endl;
		
	//coutn occurence of a number
	cout<<"4 occured "<<min_set.count(4)<<" times"<<endl;
	return 0;
}
