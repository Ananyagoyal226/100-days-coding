/*Write a program to input a year and check whether
 it is a leap year or not using conditional statements.*/

 #include <stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    // validation
    if(scanf("%d",&year)!=1||year<=0){
        printf("error:please enter a valid postive integer for the year.\n ");
        return 1;
    }
    //check leap year condition
    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("%d is a leap year.\n",year);
    } else{
        printf("%d is not a leap year.\n",year);
    }
    return 0;
}