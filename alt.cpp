// C++ implementation to find the 
// minimum manhattan distance 
// covered by visiting N co-ordinates 
#include<stdio.h>
#include <bits/stdc++.h> 
using namespace std; 

// Class of co-ordinates 
class pairs { 
public: 
	int x; 
	int y; 
}; 

// Function to calculate the 
// manhattan distance between 
// pair of points 
int calculate_distance(pairs a, 
					pairs b) 
{ 
	return abs(a.x - b.x) + 
		abs(a.y - b.y); 
} 

// Function to find the minimum 
// distance covered for visiting 
// every co-ordinate point 
int findMinDistanceUtil(vector<int> nodes, 
		int noOfcustomer, int** matrix) 
{ 
	int mindistance = INT_MAX; 
	
	// Loop to compute the distance 
	// for every possible permutation 
	do { 
		int distance = 0; 
		int prev = 1; 
		
		// Computing every total manhattan 
		// distance covered for the every 
		// co-ordinate points 
		for (int i = 0; i < noOfcustomer; i++) { 
			distance = distance + 
					matrix[prev][nodes[i]]; 
			prev = nodes[i]; 
		} 
		
		// Adding the final distance 
		distance = distance + matrix[prev][0]; 
		
		// if distance is less than 
		// minimum value than update it 
		if (distance < mindistance) 
			mindistance = distance; 
	}while ( 
		next_permutation( 
			nodes.begin(), nodes.end() 
		)); 
	return mindistance; 
} 

// Function to intialize the input 
// and find the minimum distance 
// by visiting every cordinate 
void findMinDistance() 
{ 
	int noOfcustomer = 1; 
	vector<pairs> cordinate; 
	vector<int> nodes; 
	// filling the coordinates into vector 
	pairs office, home, customer; 
	office.x = 0; 
	office.y = 0; 
	cordinate.push_back(office); 
	home.x = 5; 
	home.y = 5; 
	cordinate.push_back(home); 
	customer.x = 1; 
	customer.y = 1; 
	cordinate.push_back(customer); 
	
	// make a 2d matrix which stores 
	// distance between two point 
	int** matrix = new int*[noOfcustomer + 2]; 
	
	// Loop to compute the distance between 
	// every pair of points in the co-ordinate 
	for (int i = 0; i < noOfcustomer + 2; i++) { 
		matrix[i] = new int[noOfcustomer + 2]; 
		
		for (int j = 0; j < noOfcustomer + 2; j++) { 
			matrix[i][j] = calculate_distance( 
					cordinate[i], cordinate[j]); 
		} 
		
		// Condition to not move the 
		// index of the source or 
		// the final vertex 
		if (i != 0 && i != 1) 
			nodes.push_back(i); 
	} 
	cout << findMinDistanceUtil( 
		nodes, noOfcustomer, matrix); 
} 

// Driver Code 
int main() 
{ 
	// Function Call 
	findMinDistance(); 
	return 0; 
} 

