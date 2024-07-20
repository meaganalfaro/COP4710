#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *read = fopen("employee.dat", "rb");
    if(read == NULL){
        printf("Unable to open file.\n");
        exit(1);
    }
    
    struct Employee{
        int id;
        char name[20];
        float salary;
    };
    
    struct Employee e[3];
    for(int i = 0; i < 3; i++){
        fread(&e[i], sizeof(e[i]), 1, read);
        printf("e%d ID = ", i+1, e[i].id);
        printf("e%d Name = ", i+1, e[i].name);
        printf("e%d Salary = ", i+1, e[i].salary);
    }
    
    /* struct Employee e1, e2;
    
    fread(&e1, sizeof(e1), 1, read);
    fread(&e2, sizeof(e2), 1, read);
    
    printf("e1 ID = ", e1.id);
    printf("e1 Name = ", e1.name);
    printf("e1 Salary = ", e1.salary);
    
    printf("e2 ID = ", e2.id);
    printf("e2 Name = ", e2.name);
    printf("e2 Salary = ", e2.salary);
    
    */
    fclose(read);
    return 0;
}
