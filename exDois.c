#include <stdio.h>
int main(){
    int menor, maior, valor;
        printf("Digite o primeiro numero: ");
        scanf("%d", &valor);
        maior=valor;
        menor=valor;
            if(valor > maior){
            maior=valor;
        }
            if(valor < menor){
            menor=valor;
        }
        printf("Digite o segundo numero: ");
        scanf("%d", &valor);

            if(valor > maior){
            maior=valor;
        }
            if(valor < menor){
            menor=valor;
        }
        printf("Digite o terceiro numero: ");
        scanf("%d", &valor);
            if(valor > maior){
            maior=valor;
        }
            if(valor < menor){
            menor=valor;       
        }
    printf("Maior =%d e menor = %d", maior,menor);
    return 0;
}