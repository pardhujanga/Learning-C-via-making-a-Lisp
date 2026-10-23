#include <stdio.h>

/* Declaring  buffer of size 2048 for user input 
This declares a global array of 2048 characters
The "static" keyword makes the variable local to this file */
static char input[2048];

int main(int argc, char** argv){
    /* Print Version and Exit Information */
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit \nHope you get ragebaited \n");
    
    /* We make a never ending loop with while(1)
    as 1 always evaluates to True */
    while(1){
        /* Output the prompt 
        "fputs" does not end with a newline character, unlike "puts" */
        fputs("Who are you? ", stdout);

        /*stdin and stdout are special file variables which represent
        input to, and output from the command line. */

        /* Read a line of user input of max size 2048 
        and stores it in the "input" buffer */
        fgets(input, 2048, stdin); 
        
        /* gets and puts are analogous for input and output*/

        /* Echo user input back to user*/
        printf("No, %s", input);
    }

    return 0;
}