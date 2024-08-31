//PROBLEM-02
//Write a program to open the file created in the last problem,
//read name and marks of a student, and append them in the file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char name[50];
    float marks;

    // Open the file in append mode
    fptr = fopen("students.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read name and marks from the user
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    // Append the name and marks to the file
    fprintf(fptr, "\nName: %s, \nMarks: %0.2f\n", name, marks);

    // Close the file
    fclose(fptr);

    printf("Data appended successfully.\n");

    return 0;
}
