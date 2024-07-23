#include <stdio.h>
#include <string.h>

//creates an Employee structure
struct Employee{
    int id;
    char name[20];
    float salary;
};
//creates a nickname for E
typedef struct Employee E;

void input(E* e);
void display(E* e);
int main() {
    //how to create an employee 
/*    E emp;
    E emp2 = {34,"Emily",78000};
    E emp3 = {.name = "Robert", .salary = 41000, .id = 85};
    
    emp.id = 5;
    //needs strcpy because you can't do emp.name = "John"
    strcpy(emp.name, "John");
    emp.salary = 65000;
    
    printf("ID = %d\n", emp.id);
    printf("Name = %s\n", emp.name);
    printf("Salary = %.2f\n", emp.salary);
    
    display(&emp2);
    display(&emp3);
    
    E emp4, emp5, emp6;
    //creates a pointer to Employee
    struct Employee* emptr = &emp4;
    E* emptr2 = &emp5;
    
    input(emptr);
    input(emptr2);
    input(&emp6);
    
    display(emptr);
    display(emptr2);
    display(&emp6);
 */
    //creates an array of Employees
    E emp[5];
    for(int i = 0; i < 5; i++)
            input(&emp[i]);
    for(int i = 0; i < 5; i++)
            display(&emp[i]);

    return 0;
}
// receives a pointer to Employee
void display(E* e){
    printf("ID = %d\n", e->id);
    printf("Name = %s\n", e->name);
    printf("Salary = %.2f\n", e->salary);
}
//recieves a pointer to Employee
void input(E* e){
    //since it recieves a pointer we must use ->
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf("%s", &e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}
