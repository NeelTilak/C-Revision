#include <stdio.h>

void fibbonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
       n3 = n2 + n1;
       n1 = n2;
       n2 = n3;
       printf("%d ",n3);
       fibbonacci(n-1); 
    }
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("Fibbonacci\n");
    printf("%d %d ",0 ,1 );
    fibbonacci(n-1);
    
    return 0;
}
