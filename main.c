#include <stdio.h>

void mean(int *a, int *b, int *c);

int main(){
    int *a, *b, *c, x = 15, y = 65, z = 26;
    
    a = &x;
    b = &y;
    c = &z;
    mean(a, b, c);
    printf("\nx becomes mean %d, y becomes %d, z becomes %d\n", *a, *b, *c);
    
    return 0;
}

void mean(int *a, int *b, int *c){
    int sum, mean;
    
    mean = (*a + *b + *c)/3;
    *a = mean;
    *b = 0;
    *c = 0;
}