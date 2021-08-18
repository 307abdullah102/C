## NULL Statement
- The null statement is an expression statement with the expression missing it is useful when the syntax of the language calls for a statement but no expression evaluation. 
- The purpose of the following statement is to store all the characters read in from the standart input into the character array pointed to by text until a newline character is encountered. 
## The comma operator
 - C cupports the use of comma that can be used in expressions as an operator has the lowest predence of any C operator. 
 - The comma operator can be used to separate multiple expressions anywhere that a valid C expression can be used 
## Appendix: setjmp and longjmp 
- setjmp() and longjmp() are the functions that let you perform complex flow of control in C.
- Mainly used to implement **exception handling in C.**
- setjmp saves a copy of the program counter and the current pointer to the top of the stack.
- int setjmp(jmp_buf j)
- use the variable j to remember where you are in the code.  
- longjmp is invoked after setjmp and that means go back to the place that the j is remembering.
- stores the process in the state that it existed when it called setjmp return the value of j so the code can tell when you actually got back here via longjmp()
- the contents of the j are destroyed when it is used in a longjmp()
***
setjmp_longjmp.c
***
    
    
