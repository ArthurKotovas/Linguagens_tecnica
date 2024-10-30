#include <stdio.h>
#include <string.h>
/* Compare os nomes de dois autores usando
strcmp() e determine qual deles viria primeiro em
ordem alfabética.*/
int main(){
    char msgUM [] = "GEORGE ORWELL"; char msgDOIS [] = "FIODOR DOSTOIEVSKI";
    if(strcmp(msgUM, msgDOIS) < 0){
        printf("Antes: %s",msgUM);
    }else if(strcmp(msgUM, msgDOIS) > 0){
        printf("Antes: %s",msgDOIS);
    }else{
        printf("Sao iguais");
    }
}