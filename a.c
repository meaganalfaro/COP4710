#include<stdio.h>

int main(int argc, char **argv){//<- can also be *argv[]
// argc is argument counter
// and argv is an array which stores argument values in a string
        // argc is always 1 even with no extras which is the name of the function
        printf("%d \n", argc);
        //argv[0] is the name of the file
        printf("%s \n", argv[0]);
        printf("%s \n", argv[1]);

        return 0;
}
