#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = (a / b);
    *mod = (a % b);
}

int main()
{
    int *pdiv;
    int *pmod;
    int div;
    int mod;
    int a;
    int b;

    pmod = &mod;
    pdiv = &div;

    b = 15;
    a = 34;

    ft_div_mod(a, b, pdiv, pmod);
    printf("Divisor: %d | Remainder: %d\n", div, mod);
}
