/*Write a program to display the day of the week 
based on a number (1–7) using switch-case.*/

#include <stdio.h>
int main()
{
    int day;
    printf("enter a number (1-7):");
    scanf("%d",&day);

    switch (day)
    {case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wed");
        break;

        case 4:
        printf("thurs");
        break;

        case 5:
        printf("fri");
        break;

        case 6:
        printf("sat");
        break;

        case 7:
        printf("sun");
        break;

        default:
        printf("invalid day number");

    }
    return 0;
}
