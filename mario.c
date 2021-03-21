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
    
    // Pirampide de 6 x 6, donde n = 6
    // .....* // En la fila i = 0 tenemos 5 puntos desde j = 0 hasta j = 4 (n - i - 2) y 1 asterisco en dede j = 5 (n - i - 1) hasta j = 5 (n - 1)
    // ....** // En la fila i = 1 tenemos 4 puntos desde j = 0 hasta j = 3 (n - i - 2) y 2 asteriscos desde j = 4 (n - i - 1) hasta j = 5 (n - 1)
    // ...*** //  En la fila i = 2 tenemos 3 puntos desde j = 0 hasta j = 2 (n - i -2) y 3 asteriscos desde j = 3 (n - i - 1) hasta j = 5 (n - 1)
    // ..**** //  En la fila i = 3 tenemos 2 puntos desde j = 0 hasta j = 1 (n - i - 2) y 4 asteriscos desde j = 2 (n - i - 1) hasta j = 5 (n - 1)
    // .***** // 
    // ****** // 
    
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // I guided by the code of pyramid of stars provided by Nesso Academy from Youtube
            if (j >= n - i - 1 && j <= n - 1)
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