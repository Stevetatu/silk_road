// A simple program that copies its input to its output
// while (character is not end_of_file indicator )
    // output the character just read
    // read the character

#include<stdio.h>
int main(){
    printf("Please enter a character:\n");
    int c = getchar();
    while(c != EOF){
       
        putchar(c);
        c = getchar();

    }
}    
