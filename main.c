#include <stdio.h>

void zeroInt(int *x);
void mean(int *a, int *b, int *c);

int main(){
    int x = 10, y = 3, z = 7, *a, *b, *c, d, e, f;
    
    a = &x;
    b = &y;
    c = &z;
    d = x;
    e = y;
    f = z;
    mean(a, b, c);  
    printf("\nMean of %d, %d, %d is %d. The other two variables zero'd are %d & %d\n", d, e, f, x, y, z);
    
    return 0;
}

void mean(int *a, int *b, int *c){
    int mean;
    
    mean = (*a + *b + *c)/3;
    *a = mean;
    *b = 0;
    *c = 0;
}
