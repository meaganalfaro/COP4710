#include <stdio.h>
#include <stdlib.h>

int main() {
    char fileName[25];
    printf("Enter file name to write data: ");
    scanf("%s", fileName);
    //ffluh(stdin); <- sometimes does not work!
    
    char c;
    scanf("%c", &c);
    
    FILE *write = fopen(fileName, "wb");
    if(write == NULL){
        printf("Unable to open file %s", fileName);
        exit(1);
    }
    
    char line[50];
    printf("Enter a line to write in file: ");
    fgets(line, sizeof(line), stdin);
    
    fwrite(&line, sizeof(line), 1, write);
    fclose(write);
    
    printf("Data written successfully!\n");
    
    FILE *read = fopen(fileName, "rb");
    char data[50];
    fread(&data, sizeof(data), 1, read);
    
    printf("Data from the file: %s\n",data);

    return 0;
}
