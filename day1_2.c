// write a program to input two numbers and display their sum,difference,product and quotient
#include<stdio.h>
int main(){
    int a,b;
    int sum,diff,pro,quo;
    printf("a=%d,b=%d",a,b);
    printf("Hello! Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    printf("sum=%d,diff=%d,pro=%d,quo=%d",sum,diff,pro,quo);
    return 0;

}