#include <stdio.h>
#include <string.h>
/*Concatene duas strings que representam o
primeiro e o último nome de um autor usando strcat().*/
int main(){
    char msgUM [] = "GEORGE "; char msgDOIS [] = "ORWELL";
    strcat(msgUM, msgDOIS);
    printf("%s",msgUM);
}