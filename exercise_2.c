/*prints the addition of 2 integers, asks before starting.*/

#include <stdio.h>

int main()
{
    int a, b, sum, answer;

    printf("Welcome to the addition program.\n Would you like to add 2 integers?\n 1 = yes, 2 = no");
    scanf("%d",&answer);
    
    if(answer=1) {
        printf("Enter a integer\n -->");
        scanf("%d",&a);

        printf("Please enter other integer.\n -->");
        scanf("%d",&b);

        sum = a+b;

        printf("The sum of both numbers is:%d", sum);
    }
    else {
        printf("goodbye.");
    }

    return 0;
}