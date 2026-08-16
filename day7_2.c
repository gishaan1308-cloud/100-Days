// write a program to input a character and check whether it is a vowel or constant using if-else
#include<stdio.h>
int main() {
    char alphabet;
    printf("enter the alphabet:");
    scanf("%c",&alphabet);
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
    {
        printf("%c is a vowel",alphabet);
    }
    else{
        printf("%c is a consonant",alphabet);
    }
    return 0;
}