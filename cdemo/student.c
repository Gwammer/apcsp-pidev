#include <stdio.h>
#include <string.h>
#include "student.h"

struct Student 
{
  char firstName;
  char lastName;
  int age;
  int studentID;
} Student;

char printStudent (struct Student* student)
{
  printf("Name: %c %c\n", student->firstName, student->lastName);
  printf("  Age: %d\n", student->age);
  printf("  Student ID: %d\n", student->studentID);
  return 0;
}

int main()
{
  struct Student JohnSmith;
  struct Student JaneDoe;
  char input, name;

  strcpy(&JohnSmith.firstName, "John");
  strcpy(&JohnSmith.lastName, "Smith");
  JohnSmith.age = 16;
  JohnSmith.studentID = 123456;

  strcpy(&JaneDoe.firstName, "Jane");
  strcpy(&JaneDoe.lastName, "Doe");
  JaneDoe.age = 15;
  JaneDoe.studentID = 011235;
  
  printf("Which student(s)?\n");
  fgets(&input, 256, stdin);
  sscanf(&input, "%c", &name);
  printStudent(struct Student* name);
}
