//13. Find character value from ascii
#include <stdio.h>

int main() 
{
    int asciiValue;

   
    printf("Enter ASCII value (0-255): ");
    scanf("%d", &asciiValue);

    
    char character;
    character=asciiValue;
    

   
    printf("Character corresponding to ASCII value %d is '%c'\n", asciiValue, character);

    return 0;
}

