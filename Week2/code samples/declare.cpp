#include <stdio.h>
struct Transaction;     // declaration
int add(int a, int b);  // declaration

int main ()
{   
   Transaction;
   add(1,2);  
   return 0;  
}

// code compiles because declarations are present

// code will not link because meanings of declarations
// are not available.