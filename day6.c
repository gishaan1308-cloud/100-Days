// write a program to input an integer and check whether ot is even or odd using if else.
#include<stdio.h>
int main () {
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the %d is even ",a);
    }
    else
    {
        printf("the %d is odd",a);
    }
    return 0;
}

