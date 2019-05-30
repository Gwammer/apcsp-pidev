#include <stdio.h>
#include <string.h>
#include "student.h"

struct Student s[5];

void enter(int c){
//printf("%d",c);
 char f[20], l[20];
    int a;
    int id;
//    printf("\nenter %d\n", c); 

    printf("Please enter your first name\n");
    scanf("%s", f);
    
   printf("Please enter your last name\n");
    scanf("%s", l);
    
    printf("Please enter your age\n");
    scanf("%d", &a);
    
    printf("Please enter your student ID\n");
    scanf("%d", &id);
        

    strcpy(s[c].fname,f);
    strcpy(s[c].lname,l);
    s[c].age = a;
    s[c].studentID = id;    	
}
    int answer = 0;
    int count = -1;


void scan(){
    printf("\n"); 
    printf("Do you want to enter student information?\nPress 0 if yes, 1 for no.\nType 2 to print out all students\n");
    scanf("%d",&answer);
    if(answer ==0 ){
        count ++;
        enter(count);
    scan(); 
}
    if(answer ==2){
        printf("\nStudents\n");
    for (int i = 0; i <= count; i++)
	printStudent(&(s[i]));
        }     
}
int main(){
scan();
}

