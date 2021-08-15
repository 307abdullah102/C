## Recursion
- The programs we have discussed are generally structured as functions that call one another in a hierarchial manner. 
- For some types of problems, it is useful to have functions call themselves.
- A recursive function is a function that calls itself either directly or indirectly.
- Recursive functions commonly used in applications in which the solution to a problem can be expressed in terms of successively applying the same solution to subsets of the problem. 
- Recursion can be confusing and tricky at first. 
When a function calls itself, there is the immidiate problem of how the process stops
- A function that calls itself must contain a conditional test that terminates the recursion. 
- Any problem that can be solved recursively can also be solved iteratively.
- Recursion sometimes offers the simplest solution to some programming problems. 
- Tails recursion is the simplest way. 
*** 
recursive.c
***
## Inline Functions

- Normally a function call has overhead when being invoked.
- It takes execution time to setup the call, pass arguments, jump to the function code and return. 
- C99 added the concept of inline functions to try and avoid the amount of overhead that comes along with invoking a function. 
- Inline functions can improve the runtime performance of a program. 
- It is common misconseption that in-lining always equal faster code. 
- Inline functions increase the size of the program. 
- A function can be declared as inline function by placing the keyword inline before the declaration.
**inline void randomFunc();**

## Noreturn
- C11 added a second function specifiers named _Noreturn 
- The purpose of this specifier is to inform the user and the compiler that a particular function will not return control the calling program when it completes execution. 
- The exit( ) function is an example of a _Noreturn function
- Once exit( ) is called, the calling function never resumes. 
- The _Noreturn keyword appears in a function declaration. 
- The _Noreturn specifier may appear more than once in the same function declaration. 
- This specifier is typically used through the convenience macro noreturn header file <stdnoreturn.h>
Using _Noreturn and noreturn is equivalent 

 _Noreturn void func( ){
 abort( );
} 
***
noreturn.c
***
