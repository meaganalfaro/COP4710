#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    printf("Enter a file name: ");
    char fileName[25];
    //fgets is line by line
    // variable name, size of variable, and file pointer
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strlen(fileName) - 1] = '\0';

    // creates file pointing to file in write mode
    FILE *fp = fopen(fileName, "w");
    
    if(fp == NULL){
        printf("Unable to open file %s\n", fileName);
        exit(1);
    }
    
    int num, end, start;
    
    printf("Enter a number to generate a table: ");
    scanf("%d", &num);
    printf("Enter starting value: ");
    scanf("%d", &start);
    printf("Enter ending value: ");
    scanf("%d", &end);
    
    for(int i = start; i <= end; i++){
        fprintf(fp, "%d x %d = %d\n", num, i, num * i);
    }
    
    fclose(fp);
    printf("Done!\n");

    return 0;
}
