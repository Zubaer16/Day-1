#include <stdio.h>
int main() {
    int input, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &input);
    while (input != 0) {
        remainder = input % 10;
        rev = rev * 10 + remainder;
        input /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
