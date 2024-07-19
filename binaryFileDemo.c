#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *write = fopen("myfile.bin", "wb");
    if(write == NULL){
        printf("Unable to create file.\n");
        exit(1);
    }
    
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);
    
    fwrite(&num, sizeof(num), 1, write);
    fclose(write);
    
    printf("Data written to file. \n");

    return 0;
}
