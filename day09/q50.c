// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main(){
    int i,n,odd,sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    
    odd = 1;

    for(i = 1; i <= n; i++)
    {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("Sum = %d", sum);

    return 0;
}
    