## Communication Between Files
Methods can be used so that the modules contained in seperate files can effectively communicate.
Functions contained in seperate files can communicate through external variables.

 - An external variable is one whose value can be accessed and changed by another module (file). Inside the module that wants to access the external variable tells the compiler that a globally defined variable from another file is to be accessed. 
 - You want to access the value and possibly modify it within a function contained in another file.
 [Ex. int number = 0; -> Declare it, at the beginning of your program, outside of any function. ]
 - There are situations that arise in which you wnat to define a variable to be global but no external. It makes sense to want to define a variable this way if no functions other than those contained inside particular file needs access to the particular variable. In these situation, define the variable as ***static***
