# calculo-desvio-padrao
Código em C para calcular desvios padrão da massa e dimensões de um objeto metálico.

# Cálculo de Desvio Padrão em C

Este repositório contém um código em linguagem C desenvolvido e utilizado como parte do relatório de um experimento de **Física Experimental 1** sobre a determinação da densidade de um objeto metálico. O código foi projetado para realizar o cálculo da **média aritmética** e do **desvio padrão** das medições de massa e dimensões do objeto, essenciais para o cálculo da densidade.

## 🧰 Funcionalidades

- Calcula a **média aritmética** de até 10 valores fornecidos pelo usuário.
- Calcula o **desvio padrão amostral** dos valores inseridos.
- Exibe instruções claras sobre como interpretar os resultados.

## 📝 Estrutura do Código

1. Solicita ao usuário que insira 10 valores.
2. Calcula a média aritmética.
3. Calcula a variância e, por fim, o desvio padrão (o usuário deve realizar a raiz quadrada do valor final exibido pelo programa).

## 📚 Como Usar

1. Certifique-se de ter um compilador de C instalado, como `gcc`.
2. Clone este repositório ou copie o código diretamente.
3. Compile o código:
   ```bash
   gcc -o calculo_desvio codigo-calculo.c -lm
   ```
4. Execute o programa:
   ```bash
   ./calculo_desvio
   ```
5. Insira os valores solicitados e confira os resultados exibidos.

## 🛠️ Pré-requisitos

- Compilador C (como GCC ou Clang)
- Editor de texto para possíveis modificações no código
