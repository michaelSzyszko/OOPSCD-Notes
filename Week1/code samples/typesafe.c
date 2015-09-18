#include <stdio.h>
 void foo();

 int main(void) {
     foo(-25);
}
 void foo(char x[]) {
     printf("%s", x); /* ERROR */
}