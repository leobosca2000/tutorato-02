#include <stdio.h>

int main(void)
{
    int p;
    int i;
    int composto=0;
    
    printf("Inserire numero:");
    scanf("%d", &p);
    
    for(i=2; i<p ; i++){
        if (p % i == 0){
        composto = 1;    
        }
    }
    if (composto == 0){
        printf("%d e' un numero primo\n", p);
    } else {
        printf("%d e' un numero composto\n", p);
    }
    
}