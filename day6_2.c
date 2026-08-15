// write an program to input an integer and check whether if it is positive,negative or zero using nested if-else
#include<stdio.h>
int main() {
    int a;
    printf("enter an integer:");
    scanf("%d",&a);
    if (a>=0) {
        if(a==0) {
            printf("the number is zero");
        }
        else {
            printf("the number is positive");
        }
    }
    else {
        printf("the number is negative");
    }
    return 0;
}