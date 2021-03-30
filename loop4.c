#include <stdio.h>
int main() {
    char ascii;
    printf("Enter a character: ");
    scanf("%c", &ascii);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", ascii, ascii);

    return 0;
}
