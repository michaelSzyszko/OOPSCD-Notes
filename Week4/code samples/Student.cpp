#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
	no = 0;
	grade = 'f';
}

Student::Student(int n ,char c) {
	no = n;
	grade = c;
}
void Student::set(int n, char c){
	no = n;
	grade = c;
};


void Student::set(const Student& src) {
	no = src.no;
	grade = src.grade;		// note that passed in
							// object src's private
							// members are accessible
							// here
}



void Student::display() const {
	// if constructor initializes the object
	// this is always a valid check.
	if (no != 0)
		cout << no << ':' << grade << endl;
	else
		cout << "Not set yet" << endl;
}
