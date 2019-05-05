#include <stdio.h>

void zeroInt(int *x);
void swap(int *a, int *b);

int main(){
    int x = 100, y = 3, *a, *b, c, d;
    
    a = &x;
    b = &y;
    c = x;
    d = y;
    swap(a, b);
    printf("\n%d & %d swapped is %d & %d\n", c, d, x, y);
    
    return 0;
}

void zeroInt(int *x){
    *x = 0; 
}
void swap(int *a, int *b){
    int x, y;
    
    x = *a;
    y = *b;
    *a = y;
    *b = x;
}