#  Lógica de Programação - Exercícios em C (C99)

Este repositório contém a resolução das listas de exercícios da disciplina de Algoritmos e tecnicas de programação II, focadas em modularização, tratamento de escopo e recursividade.

---

##  Lista: Funções e Procedimentos
Foco em criar blocos de código reutilizáveis e entender a diferença entre procedimentos (`void`) e funções com retorno.

1. **Olá Nome (`helloName.c`)**: Procedimento que recebe um nome como parâmetro e exibe uma saudação personalizada.
2. **Soma de Dois Números (`sumNumbers.c`)**: Função que recebe dois valores inteiros e retorna a soma aritmética entre eles.
3. **Dobro do Valor (`doubleNumber.c`)**: Função simples que recebe um número e retorna o seu valor multiplicado por dois.
4. **Par ou Ímpar (`EvenorOdd.c`)**: Função que verifica a paridade de um número, retornando `1` para par e `0` para ímpar.
5. **Média de Aluno (`averageGrades.c`)**: Função que calcula a média de 3 notas. Aceita um parâmetro para escolher entre média aritmética ou ponderada (pesos 5, 3 e 2).
6. **Calculadora Modular (`modularCalculator.c`)**: Função que realiza as quatro operações básicas (+, -, *, /) dependendo do símbolo enviado por parâmetro.

---

##  Lista : Escopo e Parâmetros
Foco em entender como as variáveis se comportam na memória e a diferença crucial entre passar valores ou referências (ponteiros).

1. **Escopo de Bloco (`blockScope.c`)**: Demonstração de como variáveis criadas dentro de `{}` não são acessíveis fora deles.
2. **Incremento Global (`GlobalVar.c`)**: Exemplo de uso de variáveis globais e como funções podem alterar estados fora de seu escopo local.
3. **Troca de Valores (`ValueVsReference.c`)**: Experimento que compara a troca de valores (swap) usando passagem por valor (não funciona) vs. passagem por referência (funciona).
4. **Triplo por Referência (`TripleNumber.c`)**: Procedimento que recebe o endereço de uma variável e altera o valor original para o seu triplo.
5. **Adição por Referência (`AddNumberRefe.c`)**: Função que soma um valor a uma variável existente diretamente na memória do programa principal.
6. **Dois Valores por Referência (`TwoReferenceValue.c`)**: Demonstração de como uma função pode "retornar" múltiplos valores alterando várias referências simultaneamente.


---

##  Lista : Recursividade
Foco em algoritmos que resolvem problemas chamando a si mesmos, dividindo a tarefa em casos menores.

1. **Soma de Vetor (`sumRecursive.c`)**: Algoritmo que percorre um array somando seus elementos de forma recursiva até o índice zero.
2. **Fatorial Recursivo (`recursiveFactorial.c`)**: Cálculo clássico de $n!$ utilizando a estrutura de caso base e chamada recursiva.
3. **Exponencial Recursivo (`exponentialRecursive.c`)**: Calcula a potência de um número ($x^y$) sem utilizar laços de repetição (`for` ou `while`).
4. **Contagem de Dígitos (`ContNum.c`)**: Função que divide sucessivamente um número por 10 para contar quantas casas decimais ele possui.
5. **Inversão de Vetor (`ChangeWvector.c`)**: Algoritmo que troca os elementos das extremidades do vetor até que eles se encontrem no meio.
6. **Sequência de Fibonacci (`FibonacciRecursive.c`)**: Cálculo do $n$-ésimo termo da sequência, onde cada número é resultado da soma dos dois antecessores imediatos.

---
