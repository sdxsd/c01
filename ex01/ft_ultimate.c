#include <stdio.h>
void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int *ptr0;
    int **ptr1;
    int ***ptr2;
    int ****ptr3;
    int *****ptr4;
    int ******ptr5;
    int *******ptr6;
    int ********ptr7;
    int *********ptr8;
    int x = 0;

    ptr0 = &x;
    ptr1 = &ptr0;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;

    ft_ultimate_ft(ptr8);
    printf("%d", x);

}
