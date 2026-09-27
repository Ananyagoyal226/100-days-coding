/*Write a program to calculate simple and compound 
interest for given principal, rate, and time.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float P,R,T,SI,CI,amount;

    printf("enter principal:");
    scanf("%f",&P);

    printf("enter rate :");
    scanf("%f",&R);

    printf("enter time:");
    scanf("%f",&T);

    SI=(P*R*T)/100;

    amount = P*pow((1+R/100),T);
    CI=amount-P;

    printf("simple interest=%.2f\n",SI);
    printf("compound interest=%.2f\n",CI);

    return 0;


}