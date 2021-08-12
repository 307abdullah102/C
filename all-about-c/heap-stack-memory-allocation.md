## Heap-Stack Memory Allocation

There are three forms of memory that you can use in your program. 

 - static
 - stack 
 - heap

***Stack***
-
The stack is a special region of memory that stores temporary variables. 
Used to store variables that are created inside of a function 
Easier to keep track of because the memory is only locally available in the function.
**(*#*)** The stack is a ***"LIFO" (last in first out)*** data structure that is managed and optimized by the CPU

- A linear data structure 
- There is no need to manage the memory yourself (variables are allocated and freed automatically)
- If a program tries to put too much information on the stack, stack ovverflow will occur. 
- Stack overflow also occurs in situations where recursion is incorrectly used. 
- Stack variables only exist while the function that created them is running.

***Heap***
-
Opposite of stack

 - A hierarchical data structure 
 - The heap is a large pool of memory that can be used dynamically. 
 - The heap is managed by the programmer
 - The memory is accessed through the use of pointers.
 - You have to explicitly allocate (malloc) and deallocate (free) the memory.
 - Failure the free memory when you are finished with it will result in ***memory leaks*** . Memory that still "being used", and not available to other process.
 - Heap memory is slightly ***slower*** to be read from and written to.

*Use of the Heap*
-
When you need to allocate a large block of memory (a large array, a big struct)
When you need to keep that variable around a long time a ***global***

***Use of the Stack***
-
When you are dealing with relatively small variables that only need to persist as long as the function using them is alive. (Easier and faster.)

***Example of the Stack***
-

    #include<stdio.h>
    double multiplyByTwo(double input){
	  double twice = input * 2.0;
	  return twice;
	  }
	  int main(){
	  int age = 30;
	  double salary = 12312.3;
	  double myList[3] = {1.2, 3.4, 5.6};
	  printf("double your salary is %.3f", multiplyByTwo(salary));
	  return 0;
	  }
***Example of the Heap***
-

    #include<stdio.h>
    #include<stdlib.h>
    double *multiplyByTwo(double *input){
      double *twice = malloc(sizeof(double));
      *twice = *input * 2.0;
       return twice;
       }
         int main(){
         int *age = malloc(sizeof(int));
         *age = 30;
         double *salary = malloc(sizeof(double));
         *salary = 12312.3;
         double *myList = malloc(3*sizeof(double));
         myList[0] = 1.2;
         myList[1] = 3.4;
         myList[2] = 5.6;
         printf("double your salary is %.3f", *multiplyByTwo(salary));
         return 0;
         }


***Stack*** is very fast (do not have to deallocate variables - space is managed efficiently by CPU)
***Heap*** 
- variables can be accessed globally - no limit on memory size 

- slower access - you are responsible for managing the memory
- no guaranteed efficient use of space
- can be resized using realloc()
