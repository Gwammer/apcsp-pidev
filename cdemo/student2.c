#include <stdio.h>
#include <string.h>
struct Student{
    char fname[20];
    char lname[20];
    int age;
    int studentID;
};
struct Student s[5];

void enter(int c){
//printf("%d",c);
 char input[256], f[20], l[20];
    int a;
    int id;
    printf("\n"); 
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

void printStudent(struct Student s[]){
    for(int i = 0; i <=count; i++){
    printf("\n"); 
    printf("Full Name: %s %s\n",s[i].fname,s[i].lname);
    printf("Age: %d\n",s[i].age);
    printf("Student ID: %d\n",s[i].studentID);
    printf("\n");
        }
}

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
	printStudent(s);
        }     
}
int main(){
scan();
}


   
