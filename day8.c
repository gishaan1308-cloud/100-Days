// write a program to input a character and check whether it is an uppercase alphabet,lower alphabet,digit,or special character
#include<stdio.h>
int main() {
    char ch;
    printf("enter the character: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z') 
    {
        printf("lower case alphabet\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("uppercase alphabet\n");
    }
    else if(ch>='0' && ch<='9')
    {
    printf("digit");
    }
    else
    {
        printf("it is a special character\n");
    }
return 0;
}