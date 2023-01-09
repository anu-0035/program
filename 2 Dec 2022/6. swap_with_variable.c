//WAP to swap the values using 3rd variable
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter any two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping : %d %d \n",num1, num2);
    num1,num2=num2,num1;
    printf("After swapping : %d %d \n", num1, num2);
    return 0;
}
