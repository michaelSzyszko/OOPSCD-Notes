#include <stdio.h>
 void foo(int x);

 int main(void) {
     foo(-25);
}
 void foo(int x) {
     printf("%d\n", x); /* ERROR */
}