#include <stdio.h>

int main(void)
{
    int p;
    int i;
    int composto;
    
   
   for(p=1 ; p<100; p++){
       
   composto=0;
   
    for(i=2 ; i<p ; i++ ){
        if(p%i == 0)
        composto =1;
        
    }
    if(composto==0)
    printf("%d\n", p);
}

}