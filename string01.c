#include<stdio.h>
 int main()
 {
     char s[100];
     int i = 0;

     printf("Enter a string: ");
     scanf("%[^\n]", s);

     while( s[i] != '\0' )
     {

        if( s[i] >= 'a' && s[i] <= 'z' ) /*for uppercase 'a' will be A and '
        {
           s[i] = s[i] - 32;
        }
        i++;
     }


     printf("Upper Case : ");
     puts(s);


     return 0;
 }
