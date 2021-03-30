#include<stdio.h>
int main(){


    int physics,chemistry,biology,mathematics,computer;
    float percetage;

    /*input*/

    printf("Enter the marks of the 5 subjects : ");
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);

    percetage = (physics+chemistry+biology+mathematics+computer)/5;


    /*condition*/

    if (percetage >= 90 && percetage <=100)
        printf("You got A");
    else if (percetage >=80)
        printf("You got B");
    else if (percetage >=70)
        printf("You got C");
    else if (percetage >= 60)
        printf("You got D");
    else if (percetage >= 40)
        printf ("You got E");
    else if (percetage < 40 )
        printf ("You got F");

    return 0;





}
