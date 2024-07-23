#include<stdio.h>
#include<stdlib.h>

int main(){
    //creates a file pointer
    FILE *fptr;
    //pointer creates file if does not exist
    //name is first.txt and is in write if dne will create and if does exist then it will erase and right new 
    fptr = fopen("first.txt", "w");

    // file pointer will be empty if unable to open file
    if(fptr == NULL){
        printf("Unable to open this file.\n");
        exit(1);
    }
    //fprint recieves file pointer, format specifier, and what you would like to print unto file or variable
    fprintf(fptr, "%s", "This is my first file in C.\n");
    fprintf(fptr, "%s", "My name is Meagan and thats on period.\n");
    
    char line[100];
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    //in this example, it uses variable rather than specified 
    fprintf(fptr, "%s", line);
    //must use fclose and recieves file pointer 
    fclose(fptr);
    printf("Done!\n");
    
    return 0;
}
