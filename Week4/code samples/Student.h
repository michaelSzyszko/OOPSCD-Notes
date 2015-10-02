class Student {
	int no;
	char grade;
public:
	void set(int n, char c);
	void set(const Student& src);
	void display() const;
	Student();
	Student(int n, char c);
};