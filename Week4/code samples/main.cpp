#include "Student.h"
#include <iostream>

int main() {
	Student *harry = new Student(123,'c');  // object in dynamic memory
	Student backup;							// object in static memory

	harry->display();						// in safe state because of
											// constructor call
											// see what happens if you 
											// remove the constructors
	harry->set(975, 'a');
											// uses set definition of
											// Student, object used is
											// one that points to harry

	harry->display();


	backup.display();
	backup.set(*harry);
	backup.display();
}