#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() 
{
    // Step 1: Dynamically allocate memory for a C-style string of size 20
    char *str = (char *)malloc(20 * sizeof(char));
    if (str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Step 2: Store a user-inputted string into this dynamically allocated memory
    printf("Enter a string (up to 20 characters): ");
    fgets(str, 20, stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Step 3: Print the string and its length
    printf("You entered: %s\n", str);
    printf("Length of the string: %zu\n", strlen(str));

    // Step 4: Deallocate the memory after use
    free(str);
    
    return 0;
}
