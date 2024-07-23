#include <stdio.h>
#include <stdlib.h>

int main() {
    // creates a pointer to binary file in writing mode
    FILE *write = fopen("myfile.bin", "wb");
    if(write == NULL){
        printf("Unable to create file.\n");
        exit(1);
    }
    
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);
    //fwrite recieves pointer to variable, size of variable, number of instance, and file pointer
    fwrite(&num, sizeof(num), 1, write);
    fclose(write);
    
    printf("Data written to file. \n");

    return 0;
}
