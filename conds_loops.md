## Structured Programming

C is called a structured programming language because to solve a large problem, C programming language divides
the problem into smaller structural blocks each of which handles a particular responsibility. These structural blocks are.

- Decision making blocks like if-else-elseif, switch-cases,
- Repetitive blocks like For-loop, While-loop, Do-while loop etc
- subroutines/procedures - functions
The program which solves the entire problem is a collection of such structural blocks. Even a bigger structural block like a function can have smaller inner structural blocks like decisions and loops.

Structured programming came into picture after the assembly language, ALGOL 58 and ALGOL 60. Let us go back to the time when structural support was not there in the programming languages. Programming languages used to use goto and jump type of statements to hop between different logical units. A bigger program used to be unorganized and difficult to understand. A need for structured programming came into picture and programming languages started introducing these block structures. Programming languages like C, BASIC, PASCAL, FORTRAN, COBOL gave support to structured programming methodologies.

### Identifiers  
An identifier is a set of alphanumeric characters of any length that serves to identify the entities of the program (classes, functions, variables, compound types) Identifiers can be combinations of letters and numbers.
### Constant

In programming, a constant is a value that cannot be altered / modified during the execution of a program, it can only be read.
Constants are declared with the #define directive, this means that this constant will have the same value throughout the entire program.
The identifier of a constant defined in this way will be a character string that must meet the same requirements as that of a variable (without blank spaces, do not start with a numeric digit, etc.).

Example:
~~~
 #include <stdio.h>
  #define PI  3.1415926
  
  int main()
  {
    printf("Pi vale %f", PI);
    return 0;
  }
~~~
### Variable
In programming, a variable is made up of a space in the storage system (main memory of a computer) and a symbolic name (an identifier) ​​that is associated with said space. This space contains a known or unknown quantity or information, that is, a value. The variable name is the usual form of reference to the stored value: this separation between name and content allows the name to be used specifically for the exact information it represents.
~~~
- Integers: are integers that can be both positive and negative. They are defined using char, int, short, long or long long.

- Unsigned integers: are integers that can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.

- Floating point numbers: are real numbers (fractional numbers). They are defined using float and double.

- Structures: these will be explained later in the Structures section.
~~~

### Reserved Words

In computer languages, reserved words are specific that have a specific use for the language and therefore cannot be used in the code as identifiers (for example, names for variables).

### Instruction for
In C language, the syntax is used to write a for (repetitive for) statement:
The for loop is a variant of the while loop, and like this loop, it can iterate zero or more times. However, the for loop is usually only used when the exact number of times the loop has to iterate is known. This is the case of the problem raised in example 1 of the while statement in C, in which it is known in advance that the loop has to iterate exactly ten times.

Example: Therefore, this problem can be solved with a repeating for statement in the following way:
~~~
#include <stdio.h>

int main()
{
   int contador;

   printf( "\n   " );

   for ( contador=1 ; contador<=10 ; contador++ )
       printf( "%d ", contador );

   return 0;
}
~~~
### Instruction Do while
In C language, the syntax is used to write a do while statement (repetitive do while):
In short, a repeating do while statement allows you to repeatedly execute (one or more times) a block of instructions, as long as a certain condition is true.
~~~
#include <stdio.h>

int main()
{
   int contador;

   printf( "\n   " );

   contador = 1; /* Inicialización del contador */
   do
   {
      printf( "%d ", contador );   /* Salida */
      contador++;                 /* Incremento */
   } while ( contador <= 10 );     /* Condición */

   return 0;
}
~~~
