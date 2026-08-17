// write a program to input three numbers and find the largest among them using if-else
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>b & b>c)
    {
        printf("a is the largest");
    }
        else if (b>c && c>a)
    {
        printf("b is the largest");
    }
    else if(c>b && b>a)
    {
        printf("c is the largest");
    }
    else
    {
        printf("there is a tie for the largest value");
    }
    return 0;
    

}