#include <stdio.h>
#include <math.h> // has most basic maths functions like square root (sqrt)

typedef struct { //defining a new data structure called point (this is in the 2D plane)
    float x;
    float y;
} point;

float length(point p){ /*this function measures the length of the line segment
    between the point and the origin*/
    float l = sqrt(p.x * p.x + p.y * p.y);
    return l;
}

int Hi(int n){ // a function that prints Hi "n" times, each in a new line
    for (int i=0; i<n; i++){
        printf("%s", "Hi \n");
    }
    return 0;
}

int main(int argc, char** argv){ //everything you want to run has to be in this 
    point q;
    q.x = 1;
    q.y = 0.5;
    printf("%f fghgggj\n", length(q)); 
    /* %f is the one to prints floats
    The starting thing works kinda like an f-string.
    Prints everything after the main argument.
    */

    for (int i=0; i<3; i++){ //for loop
        printf("%s","Hello World!\n");
    }
    
    Hi(3);

    int i=3; //while loop
    while (i>0){
        printf("%s", "Hello World!\n");
        i-=1;
    }

    do{ // do/while loop
        puts("Whoo!");
        i += 0;
    }
    while (i<3);

    return 0;
}