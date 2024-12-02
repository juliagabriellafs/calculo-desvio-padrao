#include <stdio.h>
#include <math.h>

int main(){
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

    double quadrado = sqrt(soma);

    printf("Média: %lf\n", valores[10]);
    printf("Desvio padrão: %lf\n", quadrado);

    return 0;
}
