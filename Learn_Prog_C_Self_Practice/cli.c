// Write a program to read name and marks of a student and
// store them in a file.

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main(){
  char name[50];
  float mark;
  FILE *fptr;
  fptr = fopen("/home/Saldray/Desktop/Dosya_islemleri/Learn_Prog_C_Self_Practice/student.txt", "w");
  if (fptr == NULL){
    printf("Error in opening the file, exiting...");
    exit(1);
  }
  printf("Enter name of the student: ");
  fgets(name, sizeof(name), stdin);
  // Remove newline character if present
  //name[strcspn(name, "\n")] = 0;
  printf("Enter marks of the student: ");
  scanf("%f", &mark);
  fprintf(fptr, "\nName: %s\nMarks: %0.2f\n", name, mark);
  fclose(fptr);
  return 0;
}
