# SCD-Notes
Subject notes for Sections SCC and SDD.
## Coding rules in OOP244 sections SCC and SDD <br />(by Michael Szyszko)
Rule 1:<br />
When creating a header file you must safe guard it with this currently mysterious format/syntax.  Header files work like copy and paste and therefore the same header file cannot be included more than once when compiling a program or it will cause an error. I.e., header files must be included once and only once, but sometimes different header files or cpp files will include a header file more than once in combination.  Therefore the following syntax is used to ensure the header file is included a maximum of one times and no more!: <br />
<pre>
If the header file you are implementing is called whatever.h then 
Syntax:
#ifndef SICT_WHATEVER_H_
#define SICT_WHATEVER_H_
namespace sict{ // see rule 2 for this
   //prototypes go here
}
#endif

An example of this syntax for header file cars.h
#ifndef SICT_CARS_H_
#define SICT_CARS_H_
namespace sict{ // see rule 2 for this
   display cars engine power
   Void showEnginePower (int modelnumber);
}
#endif
</pre>
Rule 2:<br />
In this course you are to code within the namespace “sict”; The only exception is that main() will not to be defined as being in this namespace; RATHER it will be using the namespace, e.g., (“using namespace sict;”). Additionally, header files will never use any namespace what so ever; if a namespace is needed then a qualifier must be used e.g., (“sict::doSomething();”).
 
Rule 3:<br />
A variable must be defined on its own unique/separate line. I.e., you may not declare more than one variable on the same line.

E.g., NOT ACCEPTABLE
<pre>
int i, j, k;		//unacceptable
int x; int y; int z;	//unacceptable
</pre>

Rule 4:<br />
A variable name MAY NOT begin with an _underscore as this naming convention should only be used in compiler code. Instead to slightly alter our variable names to be re-used in a class declaration; we can instead end it with an underscore _.

E.g.
<pre>
int _value;	//BAD
int _total;	//BAD

int value_; //GOOD
int total_; //GOOD
</pre>

Rule 5:<br />
Forward declaration of prototypes must use meaningful names for setting default values.

E.g.
<pre>
void display (int type = 0);	//GOOD

void display (int = 0); //VERY BAD
void display (int x = 0); //BAD

//note that all three will behave exactly the same 
//but the correct one is much easier to read and understand what it does
//this is like a built in comment for your forgetful self or future programmers who will look at your code
</pre>

Rule 6:<br />
Pointer declarations are to always separate the type from the variable name. int* is a type; the type is integer pointer.
Just like int is the type for integer. We WOULD NOT write intx = 5; because it's bad style and it wouldn't compile.
int *p = nullptr will compile but this is bad style, because the type is integer pointer NOT int.
Your variable name just as declaring other variables such as double or char are to be seperated.

E.g.
<pre>
//pointer for an integer variable
int* p = nullptr;	//GOOD
//pointer for an instnace of the class Student
Student* harry = nullptr; //GOOD

int *p = nullptr;  //BAD
int Student *harry = nullptr; //BAD

//also note it is good style to initialize pointers to nullptr, this will prevent bad things from happening
</pre>

Rule 1+2+3+4+5+6 Warning:<br />
You may find that other ways work but you must adhere to these three rules. The excuse that "it works" is completely invalid and also offends Fardad greatly. Coding in this specific namespace and the naming conventions described is analogous to real world projects that involve collaborating between many other programmers and is designed to prepare you for that environment; so just do it and you will thank Fardad later when you are working at Google. <br /><br />
If anyone wants to add or modify this, send and email to fardad with changes. If valid, thier changes will be included. Do not forget to add "oop244 - " to the beginning of your subject line.
