#include<stdio.h>
int main(){

    int num,loop,loop1,isprime;
    printf("Enter the limit: ");
    scanf("%d",&num);

    for(loop=2;loop<=num;loop++){
        isprime = 1 ;
        for(loop1=2;loop1<=loop/2;loop1++){

            if(loop%loop1==0){
                isprime=0;
                break;
            }

        }
        if(isprime==1){
            printf("%d",loop);
        }
    }



}


