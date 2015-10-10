//struct instead of class just for demonstration purposes
struct Student {
	int no;
	int *gradeArray;
	int numOfGrades;  // size of grade array

	void display() const;
	Student(const Student &src);	// copy constructor
	Student(int n, int gn);
};