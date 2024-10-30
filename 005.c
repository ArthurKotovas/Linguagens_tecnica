#include <stdio.h>
#include <string.h>
/*Utilize strncpy() para copiar os primeiros 5
caracteres do título de um livro para uma nova string.*/
int main(){
    char livro[] = "HOMODEUS";    char gaveta[20];
    strncpy(gaveta,livro, 5);
    gaveta[5] = '\0';
    printf("%s",gaveta);
}