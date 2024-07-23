#include <stdio.h>
#include <stdlib.h>

int main() {
    char fileName[25];
    printf("Enter file name to write data: ");
    scanf("%s", fileName);
    //ffluh(stdin); <- sometimes does not work!
    //use this to take the \n char after entering file name
    char c;
    scanf("%c", &c);
    //pointer to binary file in writing mode
    FILE *write = fopen(fileName, "wb");
    if(write == NULL){
        printf("Unable to open file %s", fileName);
        exit(1);
    }
    
    char line[50];
    printf("Enter a line to write in file: ");
    //fgets line by line and recieves variable, size of variable, and pointer to file
    fgets(line, sizeof(line), stdin);
    //fwrite pointer to variable, size of line, number of instances, and file pointer 
    fwrite(&line, sizeof(line), 1, write);
    fclose(write);
    
    printf("Data written successfully!\n");
    // creates a read pointer to binary file in reading mode
    FILE *read = fopen(fileName, "rb");
    char data[50];
    //fread receives a pointer to variable, size of variable, number of instances, and file pointer
    fread(&data, sizeof(data), 1, read);
    
    printf("Data from the file: %s\n",data);

    return 0;
}
