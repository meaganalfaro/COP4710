#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
        if(argc != 3){
                printf("Please use 3 arguments.\n");
                exit(1);
        }

	FILE *source = fopen(argv[1], "r");
        if(source == NULL){
                printf("Unable to open source.\n");
                exit(1);
        }

	FILE *target = fopen(argv[2], "w");
        if(target == NULL){
                printf("Unable to open target.\n");
                exit(1);
        }

	char temp;
        while((temp = getc(source)) != EOF)
                putc(temp, target);

        fclose(source);
        fclose(target);

        return 0;
}
