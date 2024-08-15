#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if(numero > 100){
        printf("O valor %d e maior que 100.", numero);
    }
    return 0;
}
