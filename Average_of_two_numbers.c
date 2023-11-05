#include<stdio.h>
int main()
{
    float num1,y,num2,Average;
    scanf("%f%f",&num1,&num2);
    y=num1+num2;
    Average=0.5*y;
    printf("Average of %.0f and %.0f is: %.2f",num1,num2,Average);
}