// write a program to calculate the area and perimetrer of a rectangle given its length and breadth
#include<stdio.h>
int main() {
    int l,b;
    printf("enter the length of rectangle");
    scanf("%d",&l);
    printf("enter the breadth of rectangle");
    scanf("%d",&b);
    int perimeter=2*(l+b);
    printf("the perimeter of rectangle is:%d",perimeter);
    int area=l*b;
    printf("the area of recatngle is:%d",area);
    return 0;
}
