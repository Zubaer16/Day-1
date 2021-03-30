#include<stdio.h>
int main(){

    float electricity,total;


      /*input*/
    printf("Enter electricity : ");
    scanf("%f",&electricity);



    /*condition and calculation*/
    if (electricity <=50){

        total = electricity * 0.50;

    }

    else if (electricity <= 150){

        total = electricity * 0.75;
    }

    else if (electricity <= 250){

        total = electricity * 1.20;
    }

    else if (electricity > 250){

        total = electricity * 1.50;
    }



    /*output*/
    printf("Total electricity bill : %.2f",total);

    return 0;


}
