// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    int n, digit, i;
       /*suppose the input is n=12233344
       most freq digit=3(3 times)
       there are only 10 possible digits :0 to 9
       so we will create an array of size 10
       int freq[10];
       the clever part- the index itself represents the digit 
       so freq[0]- how many times digut 0 occurs and so onnn
       if we have seen 3 , three times
       freq[3]=3 
       this is called frequency array

       */


    int freq[10] = {0};    /*this initialize all 10 elements to zero*/
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        n = -n;
    }

    if(n == 0)
    {
        freq[0] = 1;
    }

    while(n > 0)
    {
        digit = n % 10;       /*12233344%10=4 so digit =4*/
        freq[digit]++;       /* freq[4]++ means freq[4]=freq[4]+1 initially freq[4]=0 so after finding one 4 freq[4]=1 and so on */
        n = n / 10;           /* now 12233344/10 means n=122334 */
    }

    for(i = 0; i < 10; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d\n", result);

    return 0;
}