/*Write a program to find the roots of a quadratic
 equation and categorize them.*/

 #include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("enter a,b and c:");
    scanf("%f %f %f",&a,&b,&c);

    d=b*b-4*a*c;
    if (d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("both roots are real\n");
        printf("root1=%.2f\n",root1);
        printf("root2=%.2f\n",root2);

    }
    else if(d==0){
        root1=-b/(2*a);
        printf("both roots are real and equal\n");
        printf("roots=%.2f\n",root1);
    }
    else{
        printf("roots are not real\n");
    }
    return 0;
}