#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *read = fopen("myfile.bin", "rb");
    if(read == NULL){
        printf("Unable to open file.\n");
        exit(1);
    }
    
    int num; 
    fread(&num, sizeof(num), 1, read);
    
    printf("Num = %d\n", num);

    return 0;
}
