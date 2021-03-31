#include<stdio.h>
int main(){

    char string1[100];
    char string2;

    printf("Enter string : ");
    gets(string1);
    printf("Enter the search item : ");


    int loop,count,length;
    count=0;
    length=0;
    length=strlen(string1);
    string2=getchar();

    for(loop=0;loop<length;loop++){



            if (string1[loop]==string2)
                count++;

    }

    printf("The occurrence %d",count);
    return 0;


}
