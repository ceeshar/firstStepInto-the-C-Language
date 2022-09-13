/* swapping the order (places) of integers. a  b c => b c a
sayıların yerlerini, sıralarını değiştiriyor. */

#include<stdio.h>

int main()
{
    int a, b, c, temp;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("before substitution\n");
    printf("%5d %5d %5d \n", a, b, c);
    
    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After substitution\n");
    printf("%5d %5d %5d", a, b, c);

    return 0;
}