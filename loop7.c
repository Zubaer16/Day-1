#include <stdio.h>

int main()
{
    int input, start, last, loop, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    input = 0;
    start = 1;
    last = 0;

    printf("Fibonacci terms: \n");

    for(loop=1; loop<=terms; loop++)
    {
        printf("%d, ", last);

        input = start;
        start = last;
        last = input + start;
    }

    return 0;
}
