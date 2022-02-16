## Debugging with Preprocessor 

- Using preprocessor directives, you can arrange for blocks of code to be included in your program to assist in debugging. 
- You have complete control of the formatting of data to be displayed for debugging purposes.
- The C preprocessor can be used to insert debugging code into your program. 
## Debugging with gdb

- GDB (GNU project debugger) allows you to see what is going on 'inside' another program while it executes. 
- gdb is a powerful interavtive debugger that is frequently used to debug programs compiled with GNU's gcc compiler. 
- gdb can do four main kinds of things to help you catch bugs in the act 
- make your program stop at predetermined location.
- Examine what has happened, when your program has stopped. 
- Change things in your program. 
- The programs that you use gdb on may be executing on the same machine as GDB, on other machine or an simulator. 

## Appendix: Core Files

- A core dumb is generated when a program crashes or terminated abnormally because of segmentation fault. 
- Possibly division by zero or attempts to access past the end of an array. 
- A segmentation fault is a specific kind of error caused by accessing memory that "does not belong to you."
