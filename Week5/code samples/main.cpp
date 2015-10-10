#include "Student.h"
#include <iostream>

int main() {
	Student harry(123, 3);  
	Student backup(harry);
	harry.gradeArray[1] = 34;
	harry.display();
	backup.display();

}