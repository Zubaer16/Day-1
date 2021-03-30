#include<stdio.h>
int main(){

    int n,natural;

    /*input*/
    printf ("Enter natural limit");
    scanf("%d",&n);

    /*loop*/

    for(natural=1;natural<=n;natural++ ){

        printf("%d \n",natural);
    }

    return 0;

}
