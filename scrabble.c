#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0, sum10 = 0, sum11 = 0;
    int sum12 = 0, sum13 = 0, sum14 = 0, sum15 = 0;
    int sum16 = 0, sum17 = 0, sum18 = 0, sum19 = 0, sum20 = 0, sum21 = 0, sum22 = 0, sum23 = 0, sum24 = 0, sum25 = 0, sum26 = 0;
    int n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        if (word[i] == 65 || word[i] == 97)
        {
            sum0 = sum0 + POINTS[0];
        }
        else if (word[i] == 66 || word[i] == 98)
        {
            sum1 = sum1 + POINTS[1];
        }
        else if (word[i] == 67 || word[i] == 99)
        {
            sum2 = sum2 + POINTS[2];
        }
        else if (word[i] == 68 || word[i] == 100)
        {
            sum3 += POINTS[3];
        }
        else if (word[i] == 69 || word[i] == 101)
        {
            sum4 += POINTS[4];
        }
        else if (word[i] == 70 || word[i] == 102)
        {
            sum5 += POINTS[5];
        }
        else if (word[i] == 71 || word[i] == 103)
        {
            sum6 += POINTS[6];
        }
        else if (word[i] == 72 || word[i] == 104)
        {
            sum7 += POINTS[7];
        }
        else if (word[i] == 73 || word[i] == 105)
        {
            sum8 += POINTS[8];
        }
        else if (word[i] == 74 || word[i] == 106)
        {
            sum9 += POINTS[9];
        }
        else if (word[i] == 75 || word[i] == 107)
        {
            sum10 += POINTS[10];
        }
        else if (word[i] == 76 || word[i] == 108)
        {
            sum11 += POINTS[11];
        }
        else if (word[i] == 77 || word[i] == 109)
        {
            sum12 += POINTS[12];
        }
        else if (word[i] == 78 || word[i] == 110)
        {
            sum13 += POINTS[13];
        }
        else if (word[i] == 79 || word[i] == 111)
        {
            sum14 += POINTS[14];
        }
        else if (word[i] == 80 || word[i] == 112)
        {
            sum15 += POINTS[15];
        }
        else if (word[i] == 81 || word[i] == 113)
        {
            sum16 += POINTS[16];
        }
        else if (word[i] == 82 || word[i] == 114)
        {
            sum17 += POINTS[17];
        }
        else if (word[i] == 83 || word[i] == 115)
        {
            sum18 += POINTS[18];
        }
        else if (word[i] == 84 || word[i] == 116)
        {
            sum19 += POINTS[19];
        }
        else if (word[i] == 85 || word[i] == 117)
        {
            sum20 += POINTS[20];
        }
        else if (word[i] == 86 || word[i] == 118)
        {
            sum21 += POINTS[21];
        }
        else if (word[i] == 87 || word[i] == 119)
        {
            sum22 += POINTS[22];
        }
        else if (word[i] == 88 || word[i] == 120)
        {
            sum23 += POINTS[23];
        }
        else if (word[i] == 89 || word[i] == 121)
        {
            sum24 += POINTS[24];
        }
        else if (word[i] == 90 || word[i] == 122)
        {
            sum25 += POINTS[25];
        }
        else
        {
            sum26 += 0;
        }
    }
    int score = 0;
    score = sum0 + sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 + sum9 + sum10 + sum11 + sum12 + sum13 + sum14 + sum15 + sum16 + sum17 + sum18 + sum19 + sum20 + sum21 + sum22 + sum23 + sum24 + sum25 + sum26;
    return score;
    printf("%i\n", score);
}
