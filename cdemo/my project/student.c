#include <stdio.h>
#include "student.h"

void printStudent(struct Student* s){
//    for(int i = 0; i <=count; i++){
    printf("\n"); 
    printf("Full Name: %s %s\n",s->fname, s->lname);
    printf("Age: %d\n",s->age);
    printf("Student ID: %d\n",s->studentID);
    printf("\n");
//        }
}
