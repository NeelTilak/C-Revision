#include <stdio.h>

int main(){
    printf("****Multiplication table of 2****\n\n");

    for(int i=0; i<10; i++)
    // for(int i=1; i<11; i++)
    {
        printf("2 X %d = %d\n",i+1, (i+1)*2);
        // printf("2 X %d = %d\n",i, i*2);
    }
    return 0;
}