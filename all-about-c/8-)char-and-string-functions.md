## Char and String Functions

#include<stdio.h> --- this command includes file contains function declarations and macro definitions associated with the I/O routines from the standart library. 

|Char func.|String func.  | Formatting func|
|--|--|--|
|getc|gets   | fprint
|getchar|fgets|sprint
|fgetc|puts|fflush
|ungetc|fputs|fscanf
|putc|fputs|sscanf
|putchar|getline|
|fputc||

## String Functions

**gets**

- The gets function stands for get string and reads a line from standart input into a buffer.
- gets reads until a terminating newline or end of line is founded. 
- gets takes one argument, a pointer to an array of chars where the string is stored. 

**fgets**

- fgets is used for reading entire lines of data from a file/stream has similar behaviour to gets()
- fgets accept two additional arguments.
char *fgets(char *buffer, int n, FILE *stream);
- buffer is a pointer to character array where the line that is read in will be stored. Stream is the pointer to object that identifies the stream where characters are read from. 

**getline**

- The latest function for reading a string of text is getline().
- A new C library function, having appeared around 2010. 
- The getline() function is prefered method for reading lines of text from a stream. 
ssize_t getline(char** buffer, size_t* size, FILE* stream);
- The first parameter is a pointer to a block allocated with malloc 
- The address of the first character position where the input string will be stored. 
- There is never a shortage of space (so getline() is safe).
- The second parameter is a pointer to a variable of size_t
- It specify the size in bytes pf the block of memory pointed to by the first parameter. 
- The third parameter is simply stream from which to read the line. 

**puts**

- The puts() function is used to write a line to the output screen.
- It is simpler than printf, since you do not need to include a new line char. 
- The difference between **puts and printf** is that when using printf the argument is interpreted as a formatting string. 
- Result will be often same (except for the added new line)
- The puts is safe and simple, but not flexible as it does not give us an option of formatting our string. 

## Formattin Functions

**sprintf**

- The function is used to write formatted output to a string. 
- When using sprintf(), you can combine several data variables into a character array instead of printing on the console, you store output data to a char buffer. 
int sprintf(char* string, const char* format,...)
- The first parameter is a char pointer that specifies where to send output. 
- Terminates the string with a null character. 
- The function returns the number of characters stored in the string, not including the terminal null.
- sprintf is unsafe because it does not check the length of the destination buffer. 

**fprintf**

- fprintf() is provided to perform the same operation as printf() but on a file
- Takes an additional argument. 
- The FILE pointer identifies the file to which the data is to be written.

**fscanf**

- fscanf is provided to perform the same operations as the scanf but on file. 
int fscanf (FILE* fp, const char* format,...)

**sscanf**

- The sscanf function allows you to read formatted data from a string rather than standart ınput or keyboard. 
int sscanf ( const char* str, const char* control_string[...])
- The first argument is a pointer to the string from where we want to read the data. 
- The rest of argument of sscanf() is same as that of scanf()

**fflush**

- The fflush function is used to flush/clean a file or buffer. 
- Cleans the buffer if it has been loaded with any other data already. 
int fflush(FILE* fp);
fflush(buffer);
- buffer is a temporary variable or pointer which loads to the data if the file is a null pointer, all output buffers are flushed. 
- The effect of using fflush() on an input stream is undefined. 
