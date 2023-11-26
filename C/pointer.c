#include <stdio.h>
#include <stdlib.h>

// Ö¸Õëº¯Êı
int *func_sum(int n)
{
    static int sum = 0;
    // sum = sum + n;
    int *p = &sum;
    return p;
}

int *add(int a, int b)
{
    int var = a+b;
    int *p = &var;
    return p;
}
int main(void)
{
    // int *p = func_sum(10);
    int *p = add(1, 2);
    printf("sum:%d\n", *p);
    return 0;
}
