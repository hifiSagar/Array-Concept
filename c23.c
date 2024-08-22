#include<stdio.h>
int main(){
    int array[5],i;
    printf("Add elements to the array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",& array[i]);
    }
    printf("elements of array are\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n", array[i]);
    }
    

    return 0;
}