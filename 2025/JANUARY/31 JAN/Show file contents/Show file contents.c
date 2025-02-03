#include <stdio.h>

int main() {
    
    FILE *file = fopen("php.txt", "r");
    char character;
    int numCharacters = 0;
    
    if (file == NULL) 
    {
        perror("Error opening file");
        return 1;
    }

    while ((character = fgetc(file)) != EOF)
    {
        putchar(character);
        if (character != '\n' && character != ' ')    
            numCharacters++;
    }
    
    printf("\nThe file has %d characters", numCharacters);
    fclose(file);
}
