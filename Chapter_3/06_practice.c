#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("enter the value of a\n");
    scanf("%d", &a);

    printf("enter the value of b\n");
    scanf("%d", &b);

    printf("enter the value of c\n");
    scanf("%d", &c);

    printf("enter the value of d\n");
    scanf("%d", &d);



    if (a > b && a > c && a > d)
    {
        printf("The value of a %d is greates than other number\n", a);
    }

    if (b > c && b > c && b > d)
    {
        printf("The value of b %d is greates than other number\n", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("The value of c %d is greates than other number\n", c);
    }

    if (d > a && d > b && d > c)
    {
        printf("The value of d %d is greates than other number\n", d);
    }

    return 0;
}