#include<stdio.h>
#include<string.h>

int main(){

    char string[100];

    int length;
    int loop;
    int vowel=0;
    int consonant=0;
    printf("Enter string : ");
    gets(string);


    length=strlen(string);


    for(loop =0;loop<length;loop++){
        if(( string[loop] >= 'a' && string[loop] <= 'z')||(string[loop] >= 'A' && string[loop] <= 'Z' )) {
            if(string[loop] == 'a'||string[loop]=='e'||string[loop]=='i'||
               string[loop]=='o'||string[loop]=='u'||string[loop]=='A'||
               string[loop]=='E'||string[loop]=='I'||string[loop]=='O'||
               string[loop]=='U')

                vowel++;


            else
                consonant++;



        }


        }
    printf("Vowel : %d",vowel);
    printf("Consonant : %d",consonant);
    return 0;


    }

