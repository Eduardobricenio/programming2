## programming2
### Subprograms
~~~
A subprogram is a program unit that can be invoked from another program unit to perform a specific task. These subprograms are either written by the user or supplied as part of the Fortran library.

- Statement functions:
A computing procedure defined by a single statement that is similar in form to an assignment statement. A statement function is invoked by a function reference in a main program unit or a subprogram unit. Function subprograms: Program units, also called functions, that contain a set of commonly used computations. A function subprogram's first statement is a FUNCTION statement, optionally preceded by an - Optionsstatement.
A function subprogram is invoked by a function reference in a main program unit or a subprogram unit.
- Subroutine subprograms:}
Program units, also called subroutines, that contain a set of commonly used computations. A subroutine subprogram's first statement is a SUBROUTINE statement, optionally preceded by an OPTIONS statement. A subroutine subprogram receives control when it is invoked with a CALL statement and returns control with a RETURN statement.
Subprograms supplied as part of the Fortran library are called intrinsic subprograms (or procedures). They perform mathematical, numeric, bit manipulation, character, and miscellaneous functions.
~~~
### By Value
~~~
The call by value method of passing arguments to a subprogram copies the actual value of an argument into the formal parameter of the subprogram. In this case, changes made to the parameter inside the function have no effect on the argument.

By default, Pascal uses call by value method to pass arguments. In general, this means that code within a subprogram cannot alter the arguments used to call the subprogram.
~~~
~~~
#include <stdio.h>
char toUpperByValue(char);
int main()
{
 char letra = 'a';
 printf("El valor inicial de la variable letra es %c\n", letra);
 letra = toUpperByValue(letra);
 printf("El nuevo valor de la variable letra es %c\n", letra);
 return 0;
}
char toUpperByValue(char c)
{
 if (c >= 'a' && c < 'z') /* es una letra minuscula */
 c = c - 32; /* la cambia a mayúscula */
 return c;
} 
~~~
### By Reference

Passing by reference is the term that generates the most controversy in the world of computing; therefore, if we want to properly use this statement, the word must be defined first: reference.

A reference is, in a broad sense, a value that allows us to indirectly access a particular datum within a program; This data could be found, for example, in the main memory of a computer. Putting it in simpler words, if something refers to a data, that something is considered a reference.

References take different forms and may be known differently in one programming language or another. Knowing how to identify references will become a very important skill that will allow us to make correct use of them (and by the way save us a few hours of debugging). There is no way to get lost, you just have to always keep in mind the main idea that we have already discussed. Let's move on to see some reference implementations.
~~~

