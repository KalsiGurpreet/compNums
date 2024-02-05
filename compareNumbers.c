#include<stdio.h>

int main(void)
{
    puts("Enter two integers and I will tell you");   // display message on screen.
    printf("%s", "the relationship between them:\n"); // \ backslash is an escape character and \n is
                                                      // called escape sequence and it means new line.
                                                      // scanf and printf are not part of C programming.
    
    int int1 =0;
    int int2 =0;

    scanf("%d", &int1);
    scanf("%d", &int2);

    if(int1 == int2)
    {
	printf("%d is equal to %d.\n", int1 , int2);
    }
    if(int1>int2)
    {
	printf("%d is greater than number %d.\n", int1, int2);
    }
    if(int1<int2)
    {
	printf("%d is less than %d.\n",int1, int2);
    }
    if(int1 != int2)
    {
	printf("%d is not equal to %d.\n",int1, int2);	
    }
    if(int1 >= int2)
    {
	printf("%d is greater than or equal to %d.\n",int1, int2);
    }
    if(int1 <= int2)
    {
	printf("%d is less than or equal to %d.\n", int1, int2);
    }
    return 0;

/* Standard library functions like printf and scanf are not part of the C programming
language. For example, the compiler cannot find a spelling error in printf or scanf.
When compiling a printf statement, the compiler merely provides space in the
object program for a “call” to the library function. But the compiler does not know
where the library functions are—the linker does. When the linker runs, it locates the
library functions and inserts the proper calls to these functions in the object program.
Now the object program is complete and ready to execute. The linked program is
called an executable. If the function name is misspelled, the linker will spot the
error—it will not be able to match the name in the program with the name of any
known function in the libraries. */
    
}

