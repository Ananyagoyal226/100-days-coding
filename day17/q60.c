/*Write a program to input three numbers and find 
the largest among them using if–else.*/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d ",&a,&b,&c);

    if(a>=b&& a>=c){
        printf("largest is a=%d\n",a);
    }
    else if(b>=c && b>=a){
        printf("largest is b=%d\n",b);
    }
    else{
        printf("largest is c=%d\n",c);
    }
    return 0;
}