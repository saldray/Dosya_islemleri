// Note: The fgets function only reads the first line
// if you remember, there were two line of text in
// filename.txt

#include<stdio.h>
int main(){

  FILE *fptr;

  fptr = fopen("filename.txt", "r");

  char myString[100];

  //Read the content and print it
  while(fgets(myString, 100, fptr)){
    printf("%s", myString);
  }
}


// 1 The first parameter specifies where to store the
// file content, which will be in the myString array
// we just created.
// 2  The second parameter specifies the maximum size
// of data to read, which should match the size of
// myString (100).
// 3  The third parameter requires a file pointer
// that is used to read the file
// (fptr in our example).
