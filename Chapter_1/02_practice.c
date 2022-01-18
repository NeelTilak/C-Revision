#include <stdio.h>

int main()
{
    float pi = 3.14;
    int radius, height;
    printf("eneter the radius of the cirle\n");
    scanf("%d", &radius);

    printf("eneter the height of the cirle\n");
    scanf("%d", &height);

    printf("the area of the cirle is %f", pi * radius * radius * height);
    return 0;
}