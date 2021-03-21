#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Pirampide de altura 4 (n) y ancho 9 (2 * n + 1)
    // ...# #... // En la fila i = 0 tenemos 2 asteriscos en j = 3 (n - i - 1) && j = 5 (n + i + 1)
    // ..## ##.. // En la fila i = 1 tenemos 4 asteriscos en j = 2 (n - i - 1), j = 3 (n - i) && j = 5, j = 6 (n +  i + 1)
    // .### ###. // En la fila i = 2 tenemos 6 asteriscos en j = 1 (n - i - 1), j = 2 (n - i), j = 3 (n - i + 1) && j = 5, j = 6, j = 7 (n + i + 1)
    // #### #### // En la fila i = 3 tenemos 8 asteriscos en j = 0 (n - i - 1), j = 1 (n - i), j = 2 (n - i + 1), j = 3 (n -1) && j = 5, j = 6, j = 7, j = 8 (n + i + 1)

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n + 1; j++)
        {
            // I guided by the code of pyramid of stars provided by Nesso Academy from Youtube
            if ((j >= n - i - 1 && j <= n - 1) || (j >= n + 1 && j <= n + i + 1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}