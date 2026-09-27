/*Write a program to input an integer and check 
whether it is positive, negative or zero using 
nested if–else.*/

#include <stdio.h>
int main()
{
    int a;
    printf("enter the number to check :");

    // validation
    if (scanf("%d",&a)!=1)
    {
        printf("error : please enter a valid integer.\n");
        return 1;
    }
    // to check if it postive ,negative or zero
    if(a>=0)
    {
        if (a>0){
            printf("the number %d is positive.\n",a);
        }else{
            printf("the number %d is zero.\n",a);
        }
    }else {
        printf("the number %d is negative.\n",a);
    }
    return 0;
}
