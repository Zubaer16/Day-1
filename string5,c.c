#include<stdio.h>
#include<string.h>
int main(){

    char string1[100];
    char string2[100];
    int loop1=0,loop2=0,length;

    printf("Enter string with space :");
    gets(string1);

    length=strlen(string1);

    while(string1[loop1]!='\0'){

        if(string1[loop1]!=' '){

            string2[loop2]=string1[loop1];
            loop2++;

        }
        loop1++;
    }

    string2[loop2]='\0';

    printf("After trim : %s",string2);

    return 0;

}
