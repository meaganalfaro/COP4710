#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
        //Check that you are recieving the correct number of arguments
        if(argc != 4){
                printf("Invalid Expression!");
                exit(0);
        }
	// compares the value at 2 
	if(strcmp(argv[2], "+") == 0)
		//atoi : arguments to integers
                printf("Sum is %d\n", atoi(argv[1]) + atoi(argv[3]));
        else if(strcmp(argv[2], "-") == 0)
                printf("Difference is %d\n", atoi(argv[1]) - atoi(argv[3]));
        else if(strcmp(argv[2],"x") == 0)
                printf("Product is %d\n",atoi(argv[1]) * atoi(argv[3]));
        else if(strcmp(argv[2], "/") == 0)
                printf("Division is %d\n",atoi(argv[1]) / atoi(argv[3]));
        else
            	printf("Invalid Expression! \n");
        return 0;
}
