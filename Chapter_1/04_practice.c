#include <stdio.h>

int main(){
    int principal=100, rate=3, years=1;
    int simpleinterest = (principal * rate * years)/100;
    printf("the value of the simple interest is %d",simpleinterest);
    return 0;
}