#include<stdio.h>
#include<stdlib.h>

int main(){
    char fileName[25];
    printf("Enter file name to read data: ");
    scanf("%s", fileName);
    
    FILE *fp = fopen(fileName, "r");
    
    if(fp == NULL){
        printf("Unable to open file %s\n", fileName);
        exit(1);
    }
    
    
   /* char ch = getc(fp);
    putchar(ch);
    printf("\n");*/
    
/*    char ch[25];
    while(fscanf(fp,"%s", ch) != EOF)
        printf("%s", ch);
 */
 
    char ch[100]; 
    while(fgets(ch, sizeof(ch), fp) != NULL)
        printf("%s", ch);
    printf("\n");
    
    
    return 0;
}
