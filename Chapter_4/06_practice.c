#include <stdio.h>

int main(){
    int i=1, sum=0, n=10, sumf =0;

    printf("****this is Do While loop****\n\n");
    do
    {
        sum += i;
        i++;
    } while (i<=n);
    
    printf("the sum of the 1 to 10 natural numbers is \n\n%d",sum);

    printf("\n\n****this is a for loop****\n\n");
    for ( i = 1; i <=n; i++)
    {
        sumf += i;
    }
     printf("the sum of the 1 to 10 natural numbers is \n%d",sumf);
    return 0;
}