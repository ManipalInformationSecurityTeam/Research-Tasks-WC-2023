#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Use fgets for safer input

    // Remove trailing newline character (if present)
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Efficiently remove spaces
    for (i = j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("Sentence without spaces: %s\n", str);

    return 0;
}