#include <stdio.h>
void verifica_divisao_por4(int num){
    if(num % 4 == 0){
        printf("%d e divisil por 4",num);
    }else{
        printf("%d e nao e divisil por 4",num);
    }
}
int main()
{
    int valor;
    printf("Escreva um numero inteiro de 3 digitos");
    scanf("%d",&valor);
    if(valor > 99 && valor < 1000){
        verifica_divisao_por4(valor);
    }else{
        printf("O valor deve ser 3 digitos");

    }
    return 0;
}