// #include <stdio.h>

// int main(){
// FILE *fptr;

// // Open a file in writing mode
// fptr = fopen("filename.txt", "w");

// //Write some teşt to the file
// fprintf(fptr, "Some text\n");

// // Close the file
// fclose(fptr);
// }

// varolan bir dosyaya yazma işlemi "w" yaparsak
// eski verilerin üzerine yazma işlemi yapar
// verilerimizi kaybederiz

#include<stdio.h>

int main(){

  FILE *fptr;

  fptr = fopen("filename.txt", "w");

  fprintf(fptr, "Hello World!");

  fclose(fptr);
}
