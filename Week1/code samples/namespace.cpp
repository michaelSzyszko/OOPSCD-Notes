#include <iostream>
using namespace std;

namespace first_space{
   int x;
   void func(){
      x++;
      cout << "Inside first_space: x= "<< x << endl;
   }
}

namespace second_space{
   int x;
   void func(){
      x++;
      cout << "Inside second_space x=" << x << endl;
   }
}
int main ()
{
   
   // Calls function from first name space.
   first_space::func();
   
   // Calls function from second name space.
   second_space::func(); 
   first_space::x = 5;
   first_space::func();
   
   return 0;
}