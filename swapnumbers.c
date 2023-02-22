#include<stdio.h>
//Write a program in C to swap two numbers using function
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int num1=3,num2=4;
    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Before swapping the first number is %d and second number is %d\n", num1,num2);

    swap(&num1,&num2);

    printf("After swapping the first number is %d and second number is %d\n", num1,num2);
    return 0;
}