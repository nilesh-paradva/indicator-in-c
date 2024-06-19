#include<stdio.h>

// C program to swap two numbers using pointers

void swap(int *x, int *y){

    int swaping;

    swaping=*x;
    *x = *y;
    *y = swaping;
}


int main(){

    int a,b;

    printf("\nEnter a number:- ");
    scanf("%d", &a);
    printf("Enter b number:- ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("a=%d\n", a);
    printf("b=%d\n\n", b);


    return 0;
}