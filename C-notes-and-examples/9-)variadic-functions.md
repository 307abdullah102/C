## Variadic Functions

- The variation or change here is that we are dealing with unknown number of arguments for a function. 
- We typically use a variadic function when we do not know the total number of arguments that will be used for a function. 
- One single function could potentially have n number of arguments. 
- A variadic function will contribute to the flexibality of the program that you are developing.
- When creating a variadic function, you must understand how to reference the variable number of arguments used inside the function.
- The stdarg.h library header provides you with routines that are implemented as macros.

## Types of Variadic Functions

- **va_list**
It used in situations which we need to access optional parameters and it is an argumant list. 
Represent a data object used to hold the parameters corresponding to the ellipses part of the parameter list. 
 - **va_start**
It will connect our argument pointer
The list specified in va_list is the first argument and the second argument is the last fixed parameter. 

- **va_arg**
It will fetch the current argument connected to the argument list. 
We would need to know the type of the argument that we are reading. 

- **va_end**
It is used in situations when we would like to stop using are variable argument list. 

- **va_copy**
It is used in situations for which we need to save our current location. 
***
variadic_functions.c
***
