#include <stdio.h>
#include <string.h>
int main(){
char palavra[]= "alunos da turma e";
char *ponteiro = strstr(palavra, "turma");

    if(ponteiro){
        printf("Encontrei");
    }else {
        printf("Nao achei");
    }
{
}
}