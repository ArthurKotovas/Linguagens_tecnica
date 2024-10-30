#include <stdio.h>
#include <string.h>
/*Declare duas strings: uma com o nome da
biblioteca e outra vazia. Copie o nome da biblioteca
para a string vazia usando strcpy() e imprima a segunda
string.*/
int main(){
    char stringUM [] = "Brasil";
    char stringDOIS [] = "";

    strcpy(stringDOIS,stringUM);
    printf("Palavra = %s",stringDOIS);

}