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

