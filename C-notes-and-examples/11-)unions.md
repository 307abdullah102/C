## Unions
- A union is a derived type with members that share the same storage space. 
- Sometimes the same type of construct needs different types of data 
- The union is used where it is necessary to store different types of data in the same storage area. 
- It can be used to save space and for alternating data. 
- A union does not waste storage on variables that are not being used to. 
- In most cases, unions contain two or more data types. 
- The operations that can be performed on a union area. 
- **(*)** Unions are useful in embedded programing. 
- A union could represent a file containing different record types. 
**Memory Allocation for a Union**
- Structs are similar to unions, the memory allocation for a union is different. 
- Everytime you create an instance of a struct, the computer will layout the fields in memory, one after the other. 
- Allocates storage space for all its members seperately. 

**Difference between Structure and Union Table**
|  |STRUCTURE  |UNION|
|--|--|--|
|Keyword  |"struct"  |"union"|
|Size|The compiler allocates the memory for each member. The size of structer is **greater than or equal** to the sum of sizes of members   |The compiler allocates the memory by considering the size of the largest memory. **(Size of union = size of largest number)**|
|Memory|Each member within a structure is assigned unique storage area of location  | Memory allocated is shared by individuals members of union|
|Accessing Numbers|Individual member can be accessed at a time  |Only one member can be accessed at a time|
|Initialization|Several members of a structure can initialize at once.  |Only the first member at a union can be initialized.|
***
union.c
***
