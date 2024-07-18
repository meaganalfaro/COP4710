#include <stdio.h>
#include <string.h>

struct Employee{
    int id;
    char name[20];
    float salary;
};

typedef struct Employee E;

void input(E* e);
void display(E* e);
int main() {
/*    E emp;
    E emp2 = {34,"Emily",78000};
    E emp3 = {.name = "Robert", .salary = 41000, .id = 85};
    
    emp.id = 5;
    strcpy(emp.name, "John");
    emp.salary = 65000;
    
    printf("ID = %d\n", emp.id);
    printf("Name = %s\n", emp.name);
    printf("Salary = %.2f\n", emp.salary);
    
    display(&emp2);
    display(&emp3);
    
    E emp4, emp5, emp6;
    struct Employee* emptr = &emp4;
    E* emptr2 = &emp5;
    
    input(emptr);
    input(emptr2);
    input(&emp6);
    
    display(emptr);
    display(emptr2);
    display(&emp6);
 */
 
    E emp[5];
    for(int i = 0; i < 5; i++)
            input(&emp[i]);
    for(int i = 0; i < 5; i++)
            display(&emp[i]);

    return 0;
}

void display(E* e){
    printf("ID = %d\n", e->id);
    printf("Name = %s\n", e->name);
    printf("Salary = %.2f\n", e->salary);
}

void input(E* e){
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf("%s", &e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}
