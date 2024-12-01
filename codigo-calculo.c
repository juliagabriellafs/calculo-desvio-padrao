#include <stdio.h>
 int main()
{ 
double valores[11] = {}, soma = 0, sum; 

printf("Insira o valor das medidas:\n");

 for (int i = 0; i < 10; i++){ 
printf ("%d - ", i+1);
scanf ("%lf", &valores[i]);
 }
 for (int i = 0; i < 10; i++){
 valores[10] += valores[i];
 }
 valores[10] /= 10.0; 
for (int i = 0; i < 10; i++){ 
sum = (valores[i] - valores[10]) * (valores[i] - valores[10]);
 	soma += sum;
 } 
soma *= (1.0/9.0);

printf("Média: %lf\n", valores[10]); 
printf("Desvio padrão: %lf\n", soma); 
printf("ATENÇÃO: DEVE SER FEITA A RAIZ QUADRADA DO VALOR DO DESVIO PADRÃO!\n"); 

return 0; 
}

