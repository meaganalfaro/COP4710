#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("first.txt", "w");
    
    if(fptr == NULL){
        printf("Unable to open this file.\n");
        exit(1);
    }
    
    fprintf(fptr, "%s", "This is my first file in C.\n");
    fprintf(fptr, "%s", "My name is Meagan and thats on period.\n");
    
    char line[100];
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    fprintf(fptr, "%s", line);
    
    fclose(fptr);
    printf("Done!\n");
    
    return 0;
}
