#include<stdio.h>

int main(){

    // C program to input and print array elements using pointers

    int a[10],*p,i;
    printf("\nEnter 10 Elements\n");
    for(i=0; i<10; i++)scanf("%d",&a[i]);
    
    p=a;

    printf("\nArray contains..\n");
    for(i=0; i<10; i++){
        printf("\n%d",*p);
        p++;
    }

    return 0;
}