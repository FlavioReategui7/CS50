#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//define functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    //printf("%i letter(s)\n", count_letters(text));
    //printf("%i word(s)\n", count_words(text));
    //printf("%i sentence(s)\n", count_sentences(text));

    // Obtenemos el número L y S como float(reales) con decimanles, para ello los contadores
    // deben estar como float (reales), se puede poner a solo uno o a ambos;
    float L = ((float) count_letters(text) / (float) count_words(text)) * 100;
    float S = ((float) count_sentences(text) / (float) count_words(text)) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Calculamos el mayor entero redondeado con round de include <math.h>
    int index_round = round(index);

    if (index_round <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index_round >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index_round);
    }
}

// Función contar letras
int count_letters(string text)
{
    int count_letters, number_of_letters = 0;
    for (count_letters = 0; count_letters < strlen(text); count_letters++)
    {
        if (isalpha(text[count_letters]))
        {
            number_of_letters += 1;
        }
        else
        {
            number_of_letters += 0;
        }
    }
    return number_of_letters;
}

// Función contar palabras
int count_words(string text)
{
    // En este pset, empezamos con un números de palabras igual 1, porque los espacios en blancos
    // siempre serán menores que las palabras por uno.
    int i, number_of_words = 1;
    for (i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            number_of_words += 1;
        }
    }
    return number_of_words;
}

// Función contar oraciones
int count_sentences(string text)
{
    int i, number_of_sentences = 0;
    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            number_of_sentences += 1;
        }
    }
    return number_of_sentences;
}