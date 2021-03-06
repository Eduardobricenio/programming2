# Team Members
*Erick Hernandez, Eduardo Uicab*  
GitHub Members: [Erick Hernandez](https://github.com/Hernandez227/programming2),
[Eduardo Uicab](https://github.com/Eduardobricenio/programming2)


#### [Programming Paradigms](https://cs.lmu.edu/~ray/notes/paradigms/)  
~~~ 
Never use the phrase “programming language paradigm.”
A paradigm is a way of doing something (like programming), not a concrete thing (like a language). 
Now, it’s true that if a programming language L happens to make a particular programming paradigm 
P easy to express, then we often say “L is a P language” (e.g. “Haskell is a functional programming 
language”) but that does not mean there is any such thing as a “functional language paradigm”.
~~~

### [Declarative:](https://cs.lmu.edu/~ray/notes/paradigms/) 
- Functional: (Applicative): Programming with function calls that avoid any global state.
- Dataflow
- Logic, Constraint-based.
- Template-based
- Structured  
### [Imperative:](https://cs.lmu.edu/~ray/notes/paradigms/)
- Von Neumann
- Interpreted (Scripting)
- Object-oriented

### [Declarative programming: ](https://digitalfellows.commons.gc.cuny.edu/2018/03/12/an-introduction-to-programming-paradigms/)
~~~
is a programming paradigm that expresses the logic of a computation(What do) without describing its control flow(How do). Some well-
known examples of declarative domain specific languages (DSLs) include CSS, regular expressions, and a subset of SQL (SELECT queries,
for example) Many markup languages such as HTML, MXML, XAML, XSLT... are often declarative. The declarative programming try to blur the
distinction between a program as a set of instructions and a program as an assertion about the desired answer.

~~~
#### - Functional:
The functional programming paradigms has its roots in mathematics and it is language independent. The key principal of this paradigms is the execution of series of mathematical functions. The central model for the abstraction is the function which are meant for some specific computation and not the data structure. Data are loosely coupled to functions.The function hide their implementation. Function can be replaced with their values without changing the meaning of the program. Some of the languages like perl, javascript mostly uses this paradigm.

#### - [Dataflow](https://en.wikipedia.org/wiki/Dataflow_programming)
In computer programming, dataflow programming is a programming paradigm that models a program as a directed graph of the data flowing between operations, thus implementing dataflow principles and architecture. Dataflow programming languages share some features of functional languages, and were generally developed in order to bring some functional concepts to a language more suitable for numeric processing. Some authors use the term datastream instead of dataflow to avoid confusion with dataflow computing or dataflow architecture.

#### - [Logic](https://cs.lmu.edu/~ray/notes/paradigms/)
It can be termed as abstract model of computation. It would solve logical problems like puzzles, series etc. In logic programming we have a knowledge base which we know before and along with the question and knowledge base which is given to machine, it produces result. In normal programming languages, such concept of knowledge base is not available but while using the concept of artificial intelligence, machine learning we have some models like Perception model which is using the same mechanism.

#### - [structured](https://digitalfellows.commons.gc.cuny.edu/2018/03/12/an-introduction-to-programming-paradigms/)
Structured programming is a kind of imperative programming where control flow is defined by nested loops,
conditionals,and subroutines, rather than via gotos. Variables are generally local to blocks (have lexical scope)

### [Imperative programming:](https://digitalfellows.commons.gc.cuny.edu/2018/03/12/an-introduction-to-programming-paradigms/)
~~~
is a programming paradigm that describes computation in terms of statements that change a program state. 
The declarative programs  can be dually viewed as programming commands or mathematical assertions.
~~~
#### - [Object-oriented](https://digitalfellows.commons.gc.cuny.edu/2018/03/12/an-introduction-to-programming-paradigms/)
OOP is based on the sending of messages to objects. Objects respond to messages by performing operations, generally called methods. Messages can have arguments. A society of objects, each with their own local memory and own set of operations has a different feel than the monolithic processor and single shared memory feel of non object oriented languages.

#### - Interpreted (Scripting)
An interpreted program, sometimes called a script , is a program whose instructions are actually a logically sequenced series of operating system commands, handled one at a time by a command interpreter . In turn, the command interpreter requests services from the operating system. The writer of the interpreted program need not be concerned by low-level storage management considerations. On the other hand, an interpreted program can not be as efficient as a compiled program, which has been processed by a language compiler. A language compiler converts source statements into something close to the strings of 0's and 1's that a processor ultimately is given to work on. Because this work is already done before a compiled program is run, it runs much more quickly.  


## Data Representations and operators  
[Identifier:](https://www.thoughtco.com/definition-of-identifier-958092)  In C, C++, C# and other programming languages, an identifier is a name that is assigned by the user for a program element such as variable, type, template, class, function or namespace. It is usually limited to letters, digits, and underscores. Certain words, such as "new," "int" and "break," are reserved keywords and cannot be used as identifiers. Identifiers are used to identify a program element in the code. Computer languages have restrictions for which characters can appear in an identifier. For example, in early versions of the C and C++ languages, identifiers were restricted to a sequence of one or more ASCII letters, digits, which may not appear as the first character, and underscores. Later versions of these languages support almost all Unicode characters in an identifier with the exception of white space characters and language operators.   
## What is a variable in c?
A [variable](https://fresh2refresh.com/c-programming/c-variables/) is nothing but a name given to a storage area that our programs can manipulate. Each variable in C has a specific type, which determines the size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied to the variable.  These are some types of variables:  
**1. Char**: Typically a single octet(one byte). It is an integer type.  
**2. Int**: The most natural size of integer for the machine.  
**3. Float:** A single-precision floating point value.  
**4. Double:** A double-precision floating point value.  
**5. Void:** Represents the absence of type.  
C programming language also allows to define various other types of variables, which we will cover in subsequent chapters like Enumeration, Pointer, Array, Structure, Union, etc. For this chapter, let us study only basic variable types.  
## Constants   
As the name suggests the name [constants](https://www.geeksforgeeks.org/constants-in-c-cpp/) is given to such variables or values in C/C++ programming language which cannot be modified once they are defined. They are fixed values in a program. There can be any types of constants like integer, float, octal, hexadecimal, character constants etc. You can define it by two ways:

    > Using #define preprocessor directive  
    > Using a const keyword
      
***Literals:** The values assigned to each constant variables are referred to as the literals. Generally, both terms, constants and literals are used interchangeably. For eg, “const int = 5;“, is a constant expression and the value 5 is refered to as constant integer literal.  
***Const keyword:** Using const keyword to define constants is as simple as defining variables, the difference is you will have to precede the definition with a const keyword.  
 
## Reserved words  
In C, we have 32 [keywords](https://beginnersbook.com/2014/01/c-keywords-reserved-words/), which have their predefined meaning and cannot be used as a variable name. These words are also known as “reserved words”. It is good practice to avoid using these keywords as variable name.   

***if, else, switch, case, default:** – Used for decision control programming structure.   
***break** – Used with any loop OR switch case.  
***int, float, char, double, long** – These are the data types and used during variable declaration.  
***for, while, do** – types of loop structures in C.  
***void** – One of the return type.  
***goto** – Used for redirecting the flow of execution.  
***auto, signed, const, extern, register, unsigned** – defines a variable.  
***return** – This keyword is used for returning a value.  
***continue** – It is generally used with for, while and do while loops, when compiler encounters this statement it performs the next iteration of the loop, skipping rest of the statements of current iteration.  
***enum** – Set of constants.  
***sizeof** – It is used to know the size.  
***struct, typedef**  – Both of these keywords used in structures (Grouping of data types in a single record).  
***union** – It is a collection of variables, which shares the same memory location and memory storage.  
## Types of data: primitives and composites
In computer science, a [composite data type or compound data type](https://en.wikipedia.org/wiki/Composite_data_type) is any data type which can be constructed in a program using the programming language's primitive data types and other composite types. It is sometimes called a structure or aggregate data type, although the latter term may also refer to arrays, lists, etc. The act of constructing a composite type is known as composition. Composite data types are often contrasted with scalar variables. 
  
C language supports four [primitive types](https://codeforwin.org/2017/08/data-types-in-c-programming.html#primitive) - char, int, float, void. Primitive types are also known as pre-defined or basic data types.  

Data Type	|	Size	 |	Range		| Description		|  
--|--  
Char		| 1 byte	 | -128 to +127	 | A character		|  
Int		| 2 or 4 bytes	 |-32,768 to 32,767 	 | An integer		|  
Float 		| 4 byte	 | 1.2E-38		 | Single floating point number	| 
Void		| 1 byte 	 |			 | type stores nothing 	|	  

## Distributed version control (git)	  
[Distributed version control](https://en.wikipedia.org/wiki/Distributed_version_control) (also known as distributed revision control) is a form of version control in which the complete codebase, including its full history, is mirrored on every developer's computer.[1] This enables automatic management branching and merging, speeds up most operations (except pushing and pulling), improves the ability to work offline, and does not rely on a single location for backups

## 3.1 Git Branching - Branches in a Nutshell


Nearly every VCS has some form of branching support. Branching means you diverge from the main line of development and continue to do work without messing with that main line. In many VCS tools, this is a somewhat expensive process, often requiring you to create a new copy of your source code directory, which can take a long time for large projects.
  
Branches in a Nutshell
To really understand the way Git does branching, we need to take a step back and examine how Git stores its data.

As you may remember from Getting Started, Git doesn’t store data as a series of changesets or differences, but instead as a series of snapshots.

When you make a commit, Git stores a commit object that contains a pointer to the snapshot of the content you staged. This object also contains the author’s name and email address, the message that you typed, and pointers to the commit or commits that directly came before this commit (its parent or parents): zero parents for the initial commit, one parent for a normal commit, and multiple parents for a commit that results from a merge of two or more branches.

To visualize this, let’s assume that you have a directory containing three files, and you stage them all and commit. Staging the files computes a checksum for each one (the SHA-1 hash we mentioned in Getting Started), stores that version of the file in the Git repository (Git refers to them as blobs), and adds that checksum to the staging area:
~~~
$ git add README test.rb LICENSE
$ git commit -m 'Initial commit'
~~~
Creating a New Branch
What happens when you create a new branch? Well, doing so creates a new pointer for you to move around. Let’s say you want to create a new branch called testing. You do this with the git branch command:
~~~
$ git branch testing
~~~

Figure 13. HEAD pointing to a branch
You can easily see this by running a simple git log command that shows you where the branch pointers are pointing. This option is called --decorate.
~~~
$ git log --oneline --decorate
f30ab (HEAD -> master, testing) Add feature #32 - ability to add new formats to the central interface
34ac2 Fix bug #1328 - stack overflow under certain conditions
98ca9 Initial commit
