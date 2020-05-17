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
