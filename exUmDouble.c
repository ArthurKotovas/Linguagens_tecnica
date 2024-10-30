#include <stdio.h>
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
/*double n1,n2;*/
int main(){
/*    printf("%f", soma(20,5));



    return 0;
    ---------------------------
        printf("digite dois valores com o operador: ");
    scanf("%f%f",&n1,&n2);
    */
   double valor1, valor2;
   char op;
   printf("Escolha uma operacao: \n + adicao \n - subtracao \n / divisao \n * multiplicacao\n");
   scanf("%c",&op);
   printf("digite o primeiro numero e depois digite o segundo numero: ");
   scanf("%lf%lf",&valor1,&valor2);
   if(op == '+'){
    printf("A soma e: %f",soma(valor1,valor2));
   }else if(op == '-'){
    printf("A subtracao e: %f",sub(valor1,valor2));
   }else if(op == '/'){
    printf("A divisao e: %f",div(valor1,valor2));
   }else if(op == '*'){
    printf("A multiplicacao e: %f",mult(valor1,valor2));
   }

   return 0;
}
double soma(double n1, double n2){
    return n1+n2;
}
double sub(double n1, double n2){
    return n1-n2;
}
double div(double n1, double n2){
    return n1/n2;
}
double mult(double n1, double n2){
    return n1*n2;
}