#include <stdio.h>
int main() {
    int num, loop;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (loop = 1; loop <= num; ++loop) {
        if (num % loop == 0) {
            printf("%d ", loop);
        }
    }
    return 0;
}
