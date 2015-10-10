#include "Student.h"
#include <iostream>
using namespace std;


Student::Student(int n, int ng) {
	no = n;
	numOfGrades = ng;

	// allocate resources
	gradeArray = new int[ng];

	// initialize resources with user defined size
	for (int i = 0; i < ng; i++) {
		cout << "Grade " << (i + 1) << ":" << endl;
		cin >> gradeArray[i];
	}
}

// copy constructor
Student::Student(const Student &src) {
	// shallow copy (non-resource instance variables)
	this->no = src.no;
	numOfGrades = src.numOfGrades;


	// shallow copy of grades resource
	// not recommended most times
	//gradeArray = src.gradeArray;

	

	// deep copy of grades resource
	// you almost always want a deep copy
	
	// allocate memory for the new resource
	gradeArray = new int[src.numOfGrades];

	// copy data from existing resource to new one
	for (int i = 0; i < numOfGrades; i++) 
		gradeArray[i] = src.gradeArray[i];
	
}



void Student::display() const {
	// check to see if you are in safe, empty state
	if (no != 0) {
		cout << no << ':';
		for (int i = 0; i < numOfGrades; i++)
			cout << gradeArray[i] << "|";
		cout << endl;
	} 
	else
		cout << "Not set yet" << endl;
}



