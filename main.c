#include <stdio.h>

void zeroInt(int *x);

int main(){
    int y = 10, i = 0, *x;
    
    i = y;
    x = &y;
    zeroInt(x);
    printf("%d zero'd is %d\n", i, y);
    
}

void zeroInt(int *x){
    *x = 0; 
}