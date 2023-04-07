#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Solicitar via prompt o número do cartão e verificar se é maior que zero
    long numerodocartao;
    do {
        numerodocartao = get_long("Número do cartão:");
    }
    while(numerodocartao < 0 );
    printf("%li\n", numerodocartao);

    //Verificar se o comprimento do cartão está entre 13 e 16 caracteres
    int comprimentonumerodocartao = 0;
    long tempcomprimentonumerocartao = numerodocartao;
    while(tempcomprimentonumerocartao > 0)
    {
        tempcomprimentonumerocartao /= 10;
        comprimentonumerodocartao++;
    }

    if (comprimentonumerodocartao >= 13 && comprimentonumerodocartao <= 16)
        printf("Valido\n");
    else
        printf("Invalido\n");

}