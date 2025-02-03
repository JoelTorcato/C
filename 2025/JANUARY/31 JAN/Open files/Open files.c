#include <stdio.h>

int main(){
    FILE *file;
    
    file = fopen("php.txt", "r");
    if (file == NULL){
        printf("File cannot be opened");
    }
    else
        printf("Successfully opened");
    fclose(file);
}