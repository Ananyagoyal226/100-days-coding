// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
    {
        printf("%02d-Apr-%d", day, year);
    }
    else
    {
        printf("Month is not April");
    }

    return 0;
}