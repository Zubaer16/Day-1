#include<stdio.h>
int main(){

    int num,loop;

    int sum = 0;

    /*input*/
    printf("enter limit : ");
    scanf("%d",&num);



    /*for 1 to n*/
    for(loop=1;loop<=num;loop++){

        if (loop%2==0){

            sum = sum + loop;
        }



    }

    /*output*/
    printf("Sum of the even number from 1 to n is %d",sum);

}
