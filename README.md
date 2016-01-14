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
#end if

An example of this syntax for header file cars.h
#ifndef SICT_CARS_H_
#define SICT_CARS_H_
namespace sict{ // see rule 2 for this
   display cars engine power
   Void showEnginePower (int modelnumber);
}
#end if
</pre>
Rule 2:<br />
In this course you are to code within the namespace “sict”; The only exception is that main() will not to be defined as being in this namespace; RATHER it will be using the namespace, e.g., (“using namespace sict;”). Additionally, header files will never use any namespace what so ever; if a namespace is needed then a qualifier must be used e.g., (“sict::doSomething();”).
 
Rule 1+2 Warning:<br />
You may find that other ways work but you must adhere to these two rules. The excuse that "it works" is completely invalid and also offends Fardad greatly. Coding in this specific namespace and the naming conventions described is analogous to real world projects that involve collaborating between many other programmers and is designed to prepare you for that environment; so just do it and you will thank Fardad later when you are working at Google. 
