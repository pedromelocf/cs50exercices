#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

string Texto;
int Letras = 0;
int Palavras = 1;
int Sentencas = 0;
int ColemanLiau = 0;

float calcular()
{
    float L = ((float) Letras / (float) Palavras) * 100;
    float S = ((float) Sentencas / (float) Palavras) * 100;
    float index = ((0.0588 * L) - (0.296 * S) - 15.8);
    return index;
}    

int main(void)
{
    Texto = get_string("Text:");
    for (int i = 0, n = strlen(Texto); i < n; i++)
    {
        if ((Texto[i] >= 65 && Texto[i] <= 90) || (Texto[i] >= 97 && Texto[i] <= 122))
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
    }
    
    ColemanLiau =  round(calcular());
    if (ColemanLiau < 1)
    {
        printf("Before Grade 1\n");   
    }
    if (ColemanLiau > 1 && ColemanLiau < 16)
    {
        printf("Grade %i\n", ColemanLiau);
    }
    if (ColemanLiau > 16)
    {
        printf("Grade 16+\n");
    }
}