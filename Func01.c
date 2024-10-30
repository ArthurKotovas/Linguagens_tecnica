#include <stdio.h>
int par_impar(int num)
{
    if (num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int numero;
    printf("Me fale um numero e vou te falar se ele e par ou impar");
    scanf("%d",&numero);
       int par_impar(numero);
    return 0;
}
