#include <iostream>
using namespace std;

void display(int x) { cout << x << endl;}

void display(int* x, int n) { 
	for (int i = 0; i < n; i++)
         cout << x[i] << ' ';
    cout << endl;
}

int main()  {
    int mStatic[] = { 1,3,5 };
	display(1);
	display(mStatic, 3);
}
