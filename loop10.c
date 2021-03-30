#include<stdio.h>
int main(){


    int num1,num2,loop1,loop2,store,lcm;
    printf("Enter Two Integer : ");
    scanf("%d %d",&num1,&num2);

    for(loop1=1;loop1<=num1;loop1++){
        if(num1%loop1==0){
            for(loop2=1;loop2<=num2;loop2++){
                if(num2%loop2==0){
                    if(loop1==loop2){
                        store=loop1;
                       }

                }
            }
        }
    }
    printf("GCD is : %d \n \n",store);
    printf("What is HCF or GCD?\n HCF= Highest common factors. GCD= Greatest common divisor.\n Names are different otherwise they're one and same");

    printf("LCM is (product of two numbers/HCF)\n \n");


    lcm = (num1*num2)/store;

    printf("So, LCM IS : %d",lcm);
    return 0;


}
