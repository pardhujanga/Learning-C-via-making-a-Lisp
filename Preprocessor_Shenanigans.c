/* This is a modification of Echo.c to ensure portbility, especially
in allowing the user to edit their input freely. This is to learn how 
the preprocessor works.*/

#include <stdio.h>
#include <stdlib.h> /*contains the "free" function which we use*/

/* If we are compiling on Windows compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* A replacement readline function */
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1); //this is from <string.h>
    strcpy(cpy, buffer); // I think this is to copy everything in buffer to cpy
    cpy[strlen(cpy)-1] = '\0'; /* This is add a null character at the last index 
    to let ervything know the string ends there. We need strlen(cpy) - 1 as
    the index because strlen(cpy) gives us the "right" length of cpy, but counting
    indices starts from 0*/
    return cpy;
}

/* A replacement history function 
the void typing is say it won't return anything*/
void add_history(char*unused) {}

/* Otherwise include the editline headers */
#else
#include <editline/readline.h>
#include <editline/histroy.h>
#endif

int main(int argc, char** argv) {
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1) {
        /* Now in either case readline will be correctly defined and do what we want*/
        char* input = readline("lispy> ");
        add_history(input);

        printf("No, %s \n", input);
        free(input);

    }

    return 0;
}
