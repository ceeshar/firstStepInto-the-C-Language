/*prints the addition of 2 integers*/

#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Welcome to the addition program.\n Please enter a integer.\n -->");
    scanf("%d",&a);

    printf("Please enter other integer.\n -->");
    scanf("%d",&b);

    sum = a+b;

    printf("The sum of both numbers is:%d", sum);

    return 0;
}