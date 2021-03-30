#include<stdio.h>
int main(){

    int num;

    /*input*/
    printf("enter limit : ");
    scanf("%d",&num);



    /*for n to 1*/
    for(num;num>=1;num--){

        if (num%2==0)
            printf("even number is %d \n",num);
        else
            printf("odd number is %d \n",num);

    }

}
