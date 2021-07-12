#include <stdio.h>

void ft_swap(int *a, int *b);


void ft_swap(int *a, int *b)
{
    int z;

    z = *a;
    *a = *b;
    *b = z;
}

int main()
{
    int j, p;
    j = 12;
    p = 5;
    int *ptr1 = &j;
    int *ptr2 = &p;
    ft_swap(ptr1, ptr2);
    if (j == 5 && p == 12)
        printf("Values swapped \n");
}
