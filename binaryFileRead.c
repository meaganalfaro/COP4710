#include <stdio.h>
#include <stdlib.h>

int main() {
    // creates a pointer to binary file and in reading mode
    FILE *read = fopen("myfile.bin", "rb");
    if(read == NULL){
        printf("Unable to open file.\n");
        exit(1);
    }
    
    int num; 
    //fread receives pointer to variable, size of variable, number of instances, and file pointer
    fread(&num, sizeof(num), 1, read);
    
    printf("Num = %d\n", num);

    return 0;
}
