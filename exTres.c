#include <stdio.h>
/* Escreva uma função que receba 4 números e uma letra. (A,P ou H)
Caso seja A: Média aritimétrica simples
Caso seja P: a resposta é a média ponderada (pesos: 2,3,5,10)
Caso seja H: a sua média harmônica
*/
int main()
{
    float num1, num2, num3, num4, resultado;
    char escolha;
    printf("Escolha a média: (A) Simples, (P)Ponderada (H)Harmonica: ");
    scanf("%c", &escolha);
    printf("Digite 4 numeros separados por um espaço.");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
if(escolha == 'A'){
    resultado = (num1+num2+num3+num4)/4;
}
if(escolha == 'P'){
    resultado = (2*num1+3*num2+5*num3+10*num4)/20;
}
if(escolha == 'H'){
    resultado = 4/((1/num1)+(1/num2)+(1/num3)+(1/num4));
}
printf("media  %c = %f",escolha,resultado);
    return 0;
}
