## The Preprocessor
- A program called the preprocessor is invoked before any code gets compiled in the C programming language. 
- The C preprocessor mainly performs three task on your code 
- - Removes all the comments
- - Includes all of the files from various libraries that the program needs to compile
- - Expansion of macro definitions 

**Conditions**

- The C preprocessor offers a feature known as conditional compilation 
- It is often used to create one program that can be compiled to run on different computer systems. 


 **#ifdef** 
- This directive checks whether an identifier is currently defined 

**#ifndef**
- This directive checks to see if an identifier is not currently defined. 

**#if**
- #if **some expression** --- the **some expression** must be integer expression that does not contain any increment, decrement, sizeof... 

**#elif and #else**
- The same usage as compiler code. 

**#pragma and #error**

- **#pragma:** --- It lets you place compiler instructions in your source code. 
- This directive is most useful for programs that are unusually large or that need to take advantage of the capabilities of a particular compiler. 

#pragma can be used 

- to control the amount of memory set aside for automatic variables. 
- to enable nonstandart language features.  

- **#error:**--- One of the least used but potentially most useful features of the C preprocessor is the #error directive. 

- The error directives causes the preprocessor to issue an error message that includes any text in the directive. 
- Error message is a sequence of characters seperated by spaces. 
	



