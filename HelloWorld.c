#include <stdio.h>
#include "HelloWorld.h"

// Main
int main(int argc, char *argv[]) {
    greet(argv[1]);
}

// Function implementation
void greet(char *msg) {
    if( msg == NULL ) {
        printf("Hello world!\n");
    } else {
        printf("Hello %s!\n", msg);
    }
}
