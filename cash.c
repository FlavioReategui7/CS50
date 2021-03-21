#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("Change owed: ");
    }
    while (n < 0);

    // Ejemplo : n = 0.41, cents = 41
    int cents = round(n * 100);

    // Contador de quarters (25) es igual a i y lo iniciamos en 0
    int i = 0;
    // Cumple la condición cents = 41 >= 25, entra a la instrucción
    // cents = 41 - 25 y como después ya no cumple que 16 >= 25
    // pasa al siguiente while con cents = 16
    while (cents >= 25)
    {
        cents = cents - 25; // 16
        i++;                // 1
    }
    // Contador de dimes (10) es igual a j y lo iniciamos en 0
    int j = 0;
    // Cumple la condición cents = 16 >= 10, entra a la instrucción
    // cents = 16 - 10 y como después ya no cumple que 6 <= 10
    // pasa al siguiente while con cents = 6
    while (cents >= 10)
    {
        cents = cents - 10;  // 6
        j++;                 // 1
    }
    // Contador de nickles (5) es igual a k y lo iniciamos en 0
    int k = 0;
    // Cumple la condición cents = 6 >= 5, entra a la instrucción
    // cents = 6 - 5 y como después ya no cumple que 1 <= 5
    // pasa al siguiente while con cents = 1
    while (cents >= 5)
    {
        cents = cents - 5; // 1
        k++;               // 1
    }
    // Contador de pennies (1) es igual a l y lo iniciamos en 0
    int l = 0;
    // Cumple la condición cents = 1 >= 1, entra a la instrucción
    // cents = 1 - 1 y como después es 0 se acaba la sentencia
    while (cents >= 1)
    {
        cents = cents - 1; // 0
        l++;               // 1
    }
    // Sumamos todos los contadores de las monedas
    printf("%i\n", i + j + k + l);
}