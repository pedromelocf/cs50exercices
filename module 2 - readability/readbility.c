#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string Texto;
    int Letras = 0;
    int Palavras = 1;
    int Sentencas = 0;
    Texto = get_string("Text:");
    for (int i = 0, n = strlen(Texto); i < n; i++)
    {
        if ((Texto[i] >= 65 && Texto[i] <= 90)|| (Texto[i] >= 97 && Texto[i] <= 122))
        {
            Letras++;
        }
        if (Texto[i] == ' ')
        {
            Palavras++;
        }
        if (Texto[i] == '.' || Texto[i] == '!' || Texto[i] == '?')
        {
            Sentencas++;
        }
        printf ("%i,%i,%i\n", Letras, Palavras, Sentencas);
    }
}