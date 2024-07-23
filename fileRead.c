#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char fileName[25];
    printf("Enter file name to read data: ");
    scanf("%s", fileName);
    // creates a file pointer and fopen takes file name and is in read
    //if file dne it will open file in reading mode
    FILE *fp = fopen(fileName, "r");

    //if file dne, will return null
    if(fp == NULL){
        printf("Unable to open file %s\n", fileName);
        exit(1);
    }
    
    //getc uses char by char 
    //uses EOF and feof
   /* char ch = getc(fp);
    putchar(ch);
    printf("\n");*/

    //fscan is word by word
    // recieves file pointer, format specifier, and pointer variable
/*    char ch[25];
    while(fscanf(fp,"%s", ch) != EOF)
        printf("%s", ch);
 */
    // fgets is line by line
    // receives variable, size of variable, and file pointer
    //only NULL
    char ch[100]; 
    while(fgets(ch, sizeof(ch), fp) != NULL)
        printf("%s", ch);
    printf("\n");
    
    
    return 0;
}
