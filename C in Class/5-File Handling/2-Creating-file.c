#include<stdio.h>

int main(){
    FILE *fptr;

    // Create a file
    fptr = fopen("Intro.txt", "w");

    // Close a file
    fclose(fptr);
    printf("File is closed!");

    // If you want to create the file in a specific folder, just provide an absolute path
    FILE *fptr2;

    fptr2 = fopen("newtxt.txt", "w");
    
    //for writing in the file we use fprint() function
    fprintf(fptr2, "I am writing\n");
    fprintf(fptr2, "I am writing in newtxt file\n");
    fclose(fptr2);

    //Append
    fptr2=fopen("newtxt.txt", "a");
    fprintf(fptr2, "hi i am avi\n");




    return 0;
}