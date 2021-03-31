#include<stdio.h>
 int main()
 {
     char s[100];
     int i = 0;

     printf("Enter a string: ");
     scanf("%[^\n]", s);

     while( s[i] != '\0' )
     {

        if( s[i] >= 'a' && s[i] <= 'z' ) /*for lowercase output 'a' will be 'A' and 'z' will be 'Z'*/
        {
           s[i] = s[i] - 32;    /* for lowercase output 32 will be added */
        }
        i++;
     }


     printf("Upper Case : ");
     puts(s);


     return 0;
 }
