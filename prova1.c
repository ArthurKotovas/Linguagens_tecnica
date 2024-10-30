#include <stdio.h>

int main(){
float nota1, nota2, nota3, nota4, nota5, troca;
printf("Digite a nota: ");
scanf("%f", &nota1);
printf("Digite a nota 2: ");
scanf("%f", &nota2);
if(nota1 < nota2) {
troca = nota1;
nota1 = nota2;
nota2 = troca;
}
printf("Digite a nota 3: ");
scanf("%f", &nota3);
if(nota3>nota1){
troca = nota3;
nota3 = nota2;
nota2= nota1;
nota1 = troca;
} else if (nota3 > nota2) {
troca = nota3;
nota3 = nota2;
nota2= troca;
}
printf("Digite a nota 4: ");
scanf("%f", &nota4);
if(nota4>nota1){
troca = nota4;
nota4 = nota3;
nota3 = nota2;
nota2= nota1;
nota1 = troca;
} else if (nota4 > nota2) {
troca = nota4;
nota4 = nota3;
nota3 = nota2;
nota2= troca;
} else if(nota4 > nota3) {
nota3 = nota4;
};
printf("Digite a nota 5: ");
scanf("%f", &nota4);
if(nota5>nota1){
troca = nota5;
nota5 = nota3;
nota3 = nota2;
nota2= nota1;
nota1 = troca;
} else if (nota5 > nota2) {
troca = nota5;
nota5 = nota3;
nota3 = nota2;
nota2= troca;
} else if(nota5 > nota3) {
nota3 = nota5;
} 
printf("Melhores 3 alunos: \n ");
printf("1 %f", nota1,  "\n");
printf("2 %f", nota2,  "\n");
printf("3 %f", nota3,  "\n");
return 0;
}