#include <stdio.h>
#include <string.h>
/* Compare os nomes de dois livros usando
strncmp(), considerando apenas os primeiros 4
caracteres.*/
int main(){
    char lUM[] = "HOMODEUS";    char lDOIS[] = "NECROPOLITICA"; char gaveta[8];
    strncmp(gaveta, lUM, 4);
    gaveta[4] = '\0';
    strncmp(gaveta, lDOIS, 4);
    gaveta[8] = '\0';
    strcat(lUM,lDOIS);
    printf("%s",gaveta);
}