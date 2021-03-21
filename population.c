#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int p;
    do
    {
        p = get_int("Start size: ");
    }
    while (p < 9);

    // TODO: Prompt for end size
    int P;
    do
    {
        P = get_int("End size: ");
    }
    while (P < p);

    // TODO: Calculate number of years until we reach threshold
    // Tomaremos como nuestro contador al número de años: n, hasta que
    // la población inicial llegue ser al menos la población final
    int n;
    for (n = 0; p < P; n++)
    {
        // Asignamos en cada incremento de año la nueva población para
        // verificar si la condición se cumple
        p = p + p / 3 - p / 4;
    }
    // TODO: Print number of years
    printf("Years: %i\n", n);
}