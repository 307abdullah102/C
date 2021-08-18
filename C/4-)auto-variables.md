## Auto Variables
C provides four storage classes, indicated by their storage class specifiers.

- auto
- register 
- extern 
- static

The four storage class specifiers can be split into two storage durations 

- Automatic storage duration
- Static storage duration

**Local Variables**
-
Local variables are declared within a function body or block of code.
Local variables have automatic storage duration by default.
**(*)** The C compiler assumes by default that any variable defined inside a function automatic local variable

**External Variables**
-
- The extern storage class simply tell us that a variable is defined elsewhere (not within the same block where it used)
- The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program.
- Function contained in seperate files can communicate through external variable 
- extern int numb; -- The value of numb can now be accessed and modified by the module in which the preceding declaration appears.
- Other modules can also access the value of numb.
***
global_extern_example.c 
***
## Static Variables
- The static storage class can be used on local and global variables, as well as functions
- When applied to functions, the static function can be called only from within the same file as the function appears. 
- Static variables have a property of preseving their value even after they are out of their scope. 
- Static variable preserve the value of their last use in their scope. 
- No new memory is allocated because they are not redeclared.
- Their scope is local to the function to which they were defined. 
***
static_variable_example.c
***
- Static variables also have default initials values of **zero**, unlike automatic variables, which have no default initial value. 
- Static variables are allocated memory on the **heap** not on the stack
- You want to define a global variable to be local to a particular module. In these situations, define the variable as **static**
- - Static variables should not be declared inside a structure
- - Memory allocation for structure members should be contiguous.
- - It is possible to declare a structure 

## Registers

- A processor register (CPU register) is one of a small set of data holding places that are part of the computer processor.
-  A register may hold an instruction, a storage address, or any kind of data
- The register storage class is used to define local variables that should be stored in a register instead of RAM. 
- Makes use of register variables to be much faster than that of the variables stored in the memory during the runtime program. 


 
|Storage class  |Declaration  | Scope	 | Lifetime	|
|--|--|--|--| 
|**auto**  |Inside a func/block  |within the func/block  |Until the func/block completes  |
|**register**|Inside a func/block|within the func/block |Until the func/block completes| 
|**extern**|Outside all functions|All files where the variable is declared as extern|Until the program terminates| 
|**static(local)**|Inside a func/block|within the func/block|Until the program terminates|
|**static(global)**|Outside all functions|File which it is declared|Until the program terminates|




