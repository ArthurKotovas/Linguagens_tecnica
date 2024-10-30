#include <stdio.h>
#include <string.h>
/* Concatene os nomes de dois autores
usando strncat(), mas copie apenas os primeiros 3
caracteres do segundo nome.*/
int main(){
    char msgUM [] = "GEORGE ORWELL"; char msgDOIS [] = "FIODOR DOSTOIEVSKI";
    strcat(msgUM, msgDOIS);
    printf("%s",msgUM);
}