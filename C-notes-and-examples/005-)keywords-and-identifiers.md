## #define
- The #define is a preprocessor directive
- In C programming, you can use this directive to define symbolic, or manifest, constants in a program.
It means preprocessor directives run before the compiler.
There is no need that #define statement appears first in the program. 
- #define ONE 1 --- Every ONE in the code means 1.
- The defined name NULL is used by programmers to represent the null pointer. NULL is already defined on the system inside a file named stddef.h 
- A better way of dealing with array bounds, which makes programs easier to extend, is to define a name for the UPPER ARRAY BOUND.
#define MAXIMUM_VALUE 1000

## typedef
- the typedef keyword is an advanced feature in C that enables you to create your own name for an existing data type
typedef int myType; --- defines the name myType to be equivalent to the C datatype int
myType i,j; --- i and j are declared as normal integer variables. 
***
typedef.c
***
**Advantages of  typedef**

- The advantage is in the added readability that it lends to definition of the variable 
- Code is more readable. 
- It is clear and maintainable form.

## Variable Length Arrays
What if you don't know size of an array at compilation time
- To handle this, you would have to use dynamic memory allocation with malloc.

A variable length array is an array whose length, or size, is defined in terms of an expression evaluated at execution time.

Enable you to work with arrays in your programs **without having to give them a constant size.**

The term variable in variable length array **does not mean that you can modify the ength of the array after you create it.**

**(*)**  C11 compiler does not have to implement support for variable length array because it is an optional feature.
***
vla_example.c 
***
## Flexible Array Members

- A flexible array member is a feature introduced in the C99 standart of the C programming language. 
- When using a structure, we can declare an array without a dimension and whose size is flexible in nature.
- Size of a flexible array member is variable. That means it can be changed at runtime. 
- A flexible array member can be declared only as the last member of struct.
- Each struct can contain at most one flexible array member.
- A flexible array cannot be the only member of a struct.
- A struct with a flexible array member cannot be statically initialized 
- It must be allocated dynamically.
- You cannot fix the size of the flexible array member at compile time. 
## Complex Types
- The C99 standart introduces support for complex numbers and arithmetics. 
- C11 compiler is not obliged to implement complex arithmetic. 

|Type|Meaning  |
|--|--|
|float_Complex  |Stores a complex number with real and imaginary parts (as float)  |
|double_Complex|Stores a complex number with real and imaginary parts (as double)|
|long double_Complex|Stores a complex number with real and imaginary parts (as long double)|
|float_Imaginary|Stores an imaginary number (as float)|
|double_Imaginary|Stores an imaginary number (as double)|

 ## Initializers
 - Initializers allow you to specify which elements of an array, structure or union are to be initialized by the values following an array index or a field by name.
 - C99 standart allows you to initialize the elements in random order. 
 - That can be very useful if you have a struct that contains a large number of fields and you initially just want to set a few of them. 
int arr[5] = {[3] = 12, [2] = 78}; or
int arr[5] = {[3] 12, [2] 78} is same to 
int arr[5] = { 0, 0, 12, 0, 78};
int arr[] = {[0...9] = 1, [10...99] = 2, [100] = 3};

## const
- Type qualifiers can be used in front of variables to give the compiler more information about the intended use of the variable. 
- Helps with optimization
- Definition: The compiler allows you to associate the const qualifier with variables whose values will not be changed by the program. 
- If you try to assign a value to const variable after initializing it the compiler might issue an error message. 
- const attribute in the language allows the compiler to plave your const variables into read only memory. 
- **const vs #define**
- - #define is preprocessor directive while const is a keyword. 
-  - const variables are actual variables.
- - #define is not scope controlled but const is. 

## volatile
- The volatile type qualifier tells the compiler explicitly that the specified variable will change its value. 
- It is provided so that program can tell the compiler to suppress various kinds of optimizations. 
- It prevents the compiler from optimizing away seemingly redundant assignments. 
**- A variable should be declared volatile whenever its value could change unexpectedly.**
volatile int* pvol; // pvol points the volatile location 

## restrict
- The restrict type qualifier is an optimization hint for the compiler (the compiler can choose to ignore it )
- Without the restrict keyword, the compiler has to assume the worst case that some other identifier might have changed the data in between two uses of a pointer. 
- With restrict keyword used, the compiler is free to look for computational shortcuts. 
