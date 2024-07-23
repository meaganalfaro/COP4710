#include <stdio.h>
#include <string.h>

//structer names student
struct student{
    int id;
    char name[20];
    float quiz1, quiz2, quiz3;
};

void input(struct student* s);
void display(struct student* s);
float stdAverage(struct student* s);
//float clsAverage(struct student* s);

int main(){
    //creates an array of students
    struct student s[5];
    
    //fills all of the values of the array
    for(int i = 0; i < 5; i++)
        //recieves a pointer which is why we use &
        input(&s[i]);
    //displays the array of students
    for(int i = 0; i < 5; i++)
        display(&s[i]);
    
    printf("Average quiz score for student: %f", stdAverage(&s[5]));
    return 0;
}
//takes a students pointer
void input(struct student* s){
    printf("Enter ID: ");
    //since we are using a pointer, we use -> instead of .
    scanf("%d", &s->id);
    printf("Enter Name: ");
    scanf("%s", &s->name);
    printf("Enter grade for quiz 1: ");
    scanf("%f", &s->quiz1);
    printf("Enter grade for quiz 2: ");
    scanf("%f", &s->quiz2);
    printf("Enter grade for quiz 3: ");
    scanf("%f", &s->quiz3);
}
//recieves a pointer in the argument
void display(struct student* s){
    //takes a pointer which is why we use ->
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Quiz 1 grade: %.2f\n", s->quiz1);
    printf("Quiz 2 grade: %.2f\n", s->quiz2);
    printf("Quiz 3 grade: %.2f\n", s->quiz3);
}
float stdAverage(struct student* s){
    float sum = 0;
    for(int i = 0; i < 5; i++)
        //iterates through each quiz grade
        sum += s[i]->quiz1 + s[i]->quiz2 + s[i]->quiz3;
    return sum/=3;
}
//float clsAverage(){
    
//}
