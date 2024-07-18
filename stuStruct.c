#include <stdio.h>
#include <string.h>

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
    struct student s[5];
    
    for(int i = 0; i < 5; i++)
        input(&s[i]);
    for(int i = 0; i < 5; i++)
        display(&s[i]);
    
    printf("Average quiz score for student: %f", stdAverage(&s[5]));
    return 0;
}
void input(struct student* s){
    printf("Enter ID: ");
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
void display(struct student* s){
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Quiz 1 grade: %.2f\n", s->quiz1);
    printf("Quiz 2 grade: %.2f\n", s->quiz2);
    printf("Quiz 3 grade: %.2f\n", s->quiz3);
}
float stdAverage(struct student* s){
    float sum = 0;
    for(int i = 0; i < 5; i++)
        sum += s[i]->quiz1 + s[i]->quiz2 + s[i]->quiz3;
    return sum/=3;
}
//float clsAverage(){
    
//}
