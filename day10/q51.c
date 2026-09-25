// Write a program to print the product of even numbers from 1 to n
#include <stdio.h>

int main(){
    int n,i;
    long long product=1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        product = product * i;
    }
    printf("Product = %lld\n", product);
    return 0;
}