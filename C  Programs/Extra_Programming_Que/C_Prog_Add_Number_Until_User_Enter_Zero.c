
#include<stdio.h>
int main()
{
    double number , sum = 0;

    do
    {
        printf("Enter the number: ");
        scanf("%lf", &number);
        sum += number;
    }

    while(number != 0.0);

    printf("Sum = %2.lf" , sum);

    return 0;
}

