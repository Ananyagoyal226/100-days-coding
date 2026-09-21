// search for an element in an array using linear search 

#include <stdio.h>

int main(){
    int arr[100],n,key,i;
    int found = 0;

    printf("enter number of elements:");
    scanf("%d",&n);
    
    printf("enter elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    
    }
    printf("enter elements to search:");
    scanf("%d",&key);

    for (i=1;i<n;i++){
        if(arr[i]==key){
            printf("element found at index %d\n",i);
            found = 1;
            break;
        }

    }
    if (found==0){
        printf("element not found");
    }
    return 0;
}