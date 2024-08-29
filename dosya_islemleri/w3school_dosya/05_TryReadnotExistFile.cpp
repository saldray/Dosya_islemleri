// #include<stdio.h>

// int main(){
//   FILE *fptr;

//   fptr = fopen("loremipsum.txt", "r");

//   //Print some text if the file does not exist
//   if(fptr == NULL){
//     printf("Not able to open the file.");
//   }
//   fclose(fptr);

//   return 0;
// }


#include <stdio.h>

// int main() {
//   FILE *fptr;

//   // Open a file in read mode
//   fptr = fopen("loremipsum.txt", "r");

//   // Print some text if the file does not exist
//   if(fptr == NULL) {
//     printf("Not able to open the file.");
//   }

//   // Close the file
//   fclose(fptr);

//   return 0;
// }




// In this version, fclose(fptr) is only called if fptr is not NULL, preventing the segmentation fault. Let me know if you need any further assistance!

#include<stdio.h>

int main(){
  FILE *fptr;

  fptr = fopen("loremipsum.txt", "r");

  if(fptr == NULL){
    printf("Not able to open the file.");
  }
  else{
    // Close the file only if it was successfully
    // opened
    fclose(fptr);
  }
}
