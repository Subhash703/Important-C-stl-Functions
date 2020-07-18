#include<iostream>
#include<unordered_map>
#include <bits/stdc++.h>
using namespace std;
/*
	Most common function fo unordered map:

	count(): Returns boolean values, ie, 1 if the key passes exists, else false.
	erase(key) : Returns the passed key.
	clear() : Deletes the entire map.
	size() : Returns the size of the map.
*/
void print(unordered_map<int, int> m) 
{ 
    for (auto i = m.begin(); 
         i != m.end(); i++) { 
        std::cout << i->first 
                  << " : " << i->second << '\n'; 
    } 
    cout << endl; 
} 
  
// Driver Code 
int main() 
{ 
    // Defining unordered map 
    unordered_map<int, int> m; 
  
    // Enters the soecified value 
    for (int i = 0; i < 10; i++) { 
        m[i] = 1; 
    } 
  
    // Print the map 
    cout << "Map initially: \n"; 
    print(m); 
  
    // Incresing value of 
    // certain keys by 1 
    for (int i = 0; i < 10; i += 4) { 
        m[i] += 10; 
    } 
  
    // Print the map 
    cout << "Map after increasing"
         << " value: \n"; 
    print(m); 
  
    // Size 
    cout << "Size: " << m.size() 
         << "\n"; 
  
    // count method to see if 
    // 20 is present or not 
    if (m.count(20) == 0) { 
        cout << "20 is not present"
             << " in map\n"; 
    } 
  
    // count method to see if 4 
    // is present or not 
    if (m.count(4) == 1) { 
        cout << "4 is not present in"
             << " map with the value " << m[4] << "\n"; 
    } 
} 
