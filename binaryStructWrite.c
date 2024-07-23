#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    struct Employee{
        int id; 
        char name[20];
        float salary;
    };
    //nicknames struct Employee to emp
    typedef struct Employee emp;
    
    emp e[3] = {{11, "John", 91.23}, {22, "Robert", 47.23}, {33, "David", 67.35}};
    // creates a file pointer to binary file in write mode
    FILE *write = fopen("employee.dat", "wb");
    
    for(int i = 0; i < 3; i++){
        //recieves a variable pointer, the size of the variable, number of instances, and a file pointer
        fwrite(&e[i], sizeof(e[i]), 1, write);
    }
    // not practical may change size -> fwrite(&e, sizeof(e), 3, write);
    
    printf("Record saved!\n");
    
    /*
    emp e1, e2, e3;
    e1.id = 11;
    strcpy(e1.name, "John");
    e1.salary = 68.30;
    
    e2.id = 12;
    strcpy(e2.name, "Carlos");
    e2.salary = 99.00;
    
    e3.id = 13;
    strcpy(e3.name, "Meagan");
    e3.salary = 99.01;
    
    FILE *write = fopen("employee.dat", "wb");
    
    fwrite(&e1, sizeof(e1), 1, write);
    fwrite(&e2, sizeof(e2), 1, write);
    fwrite(&e3, sizeof(e3), 1, write);
    */
    
    return 0;
}
