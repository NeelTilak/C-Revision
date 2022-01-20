#include <stdio.h>

int main()
{
    int i = 1, sum = 0, n = 8;

    // printf("****Multipliaction table of 8 and sum of 8 table****\n\n");

    // for(i=1;i<11;i++){
    //     printf("8 X %d is = %d\n",i ,i*8);
    // }

    while (i < 11)
    {
        n = 8 * i;
        sum += n;
        i++;
    }
    printf("the sum of 8 table is%d\n",sum);

    return 0;
}
