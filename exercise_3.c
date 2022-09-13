/*finding the smallest number among 3 numbers. 
Finding the minimum number out of 3 numbers entered by the user.*/

#include <stdio.h>

int main()
{
    int a, b, c, min;

    printf("Enter number 1:\n");
    scanf("%d", &a);

    printf("Enter number 2:\n");
    scanf("%d", &b);

    printf("Enter number 3:\n");
    scanf("%d", &c);

    if(a<b) 
    {
        min=a;
    }
    else
    {
        min=b;
    }
    if (c<min)
    {
        min=c;
    }

    printf("%d , %d , %d \n", a, b, c);
    printf("min = %d", min);
}
