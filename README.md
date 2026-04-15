# Lógica de Programação - Exercícios em C (C99)

Este repositório contém a resolução das listas de exercícios da disciplina de Algoritmos e Técnicas de Programação II, focadas em modularização, tratamento de escopo, recursividade, ponteiros e vetores.

---

## Lista: Funções e Procedimentos (Unidade 3)
Foco em criar blocos de código reutilizáveis e entender a diferença entre procedimentos (`void`) e funções com retorno.

1. **Exercício 1: Iniciando Sistema (`startedSystem.c`)**: Procedimento que exibe a mensagem de inicialização.
2. **Exercício 2: Dobro do Valor (`doubleNumber.c`)**: Função que recebe um inteiro e retorna seu dobro.
3. **Exercício 3: Soma de Dois Números (`sumNumbers.c`)**: Função que retorna a soma aritmética entre dois valores.
4. **Exercício 4: Olá Nome (`helloName.c`)**: Procedimento que exibe uma saudação personalizada com o nome recebido.
5. **Exercício 5: Média de Aluno (`averageGrades.c`)**: Função que calcula a média de 3 notas. *(Nota: Seu código permite escolher entre aritmética e ponderada, mas a lista foca na média simples).*
6. **Exercício 6: Verificação de Aprovação (`studentApproved.c`)**: Procedimento que informa se o aluno foi aprovado com base na média.
7. **Exercício 7: Par ou Ímpar (`EvenorOdd.c`)**: Função que verifica a paridade, retornando verdadeiro ou falso.
8. **Exercício 8: Quadrado de um Número (`SquareEven.c`)**: Utiliza uma função para calcular e exibir o quadrado de um valor.
9. **Exercício 9: Soma Modular (`modularProgramSum.c`)**: Programa que lê valores, soma via função e exibe via procedimento.
10. **Exercício 10: Conjunto de Funções (`modularCalculator.c`)**: Implementação de múltiplas funções (soma, média, maior valor) integradas.

**Extras da Unidade 3:**
* **Tabuada (`tabuada.c`)**: Gera a tabela de multiplicação de um número.
* **Cálculos Diversos**: `posicaoIJ1.c`, `posicaoIJ2.c`, `posicaoIJ3.c`, `Rest2.c`, `SixNextOdd.c`, `PositiveAndMedia.c`, `NumberImpar.c`, `MediaPondPeso.c`, `MaiorPosicao.c`, `ItsEven.c`, `Interval.c`, `HowmanyEvenOdd.c`, `EvenOrODDOrNull.c`.

---

## Lista: Escopo e Parâmetros (Unidade 4)
Foco em entender como as variáveis se comportam na memória e a diferença entre passar valores ou referências.

1. **Exercício 1: Global vs Local (`GlobalVar.c`)**: Demonstra variáveis com mesmo nome em escopos diferentes.
2. **Exercício 2: Alteração por Valor (`ChangeValue.c`)**: Procedimento que tenta alterar um valor recebido por cópia.
3. **Exercício 3: Alteração por Referência (`ReferenceValue.c`)**: Procedimento que altera o valor original usando ponteiros.
4. **Exercício 4: Troca de Valores (`TwoReferenceValue.c`)**: Procedimento que inverte os valores de duas variáveis por referência.
5. **Exercício 5: Escopo de Bloco (`blockScope.c`)**: Demonstração de visibilidade de variáveis dentro de estruturas de decisão.
6. **Exercício 6: Triplo por Valor (`TripleNumber.c`)**: Função que retorna o triplo de um número recebido por valor.
7. **Exercício 7: Incremento por Referência (`AddNumberRefe.c`)**: Procedimento que aumenta o valor de uma variável diretamente na memória.
8. **Exercício 8: Valor vs Referência (`ValueVsReference.c`)**: Comparação prática entre os dois tipos de passagem de parâmetros.
9. **Exercício 9: Contador de Chamadas (`ContFunction.c`)**: Uso de variável global para rastrear execuções de uma função.
10. **Exercício 10: Análise de Comportamento (`ComentFunction.c`)**: Explicação teórica via comentários sobre múltiplas funções acessando a mesma referência.

**Extras da Unidade 4:**
* **Incremento (`PreePosIncremento.c`)**: Testes de pré e pós incremento de variáveis.

---

## Lista: Recursividade e Ponteiros (Unidade 5)
Foco em algoritmos recursivos e na manipulação direta de endereços de memória.

1. **Exercício 1: Fatorial Recursivo (`recursiveFactorial.c`)**: Cálculo clássico de n! com recursão.
2. **Exercício 2: Soma de 1 até N (`sumRecursive.c`)**: Função recursiva para somatório simples. *(Nota: Seu arquivo atual descreve soma de vetor; ajuste para somar de 1 a n).*
3. **Exercício 3: Potência Recursiva (`exponentialRecursive.c`)**: Cálculo de base elevada ao expoente sem laços.
4. **Exercício 4: Contagem Regressiva (`ContNum.c`)**: Função que conta de n até 0. *(Nota: Seu código atual conta dígitos; revise para contagem regressiva).*
5. **Exercício 5: Alteração com Ponteiros (`AlterValues.c`)**: Programa básico para mudar valor de variável via ponteiro.
6. **Exercício 7: Vetor com Ponteiros (`ChangeWvector.c`)**: Declaração e alteração de elementos de vetor usando endereços.
7. **Exercício 8: Alterar String (`alterString.c`)**: Recebe uma string e modifica seu primeiro caractere.
8. **Exercício 9: Iterativo vs Recursivo (`InteraVsRecurs.c`)**: Comparação de performance ou estrutura entre as duas abordagens.
9. **Exercício 10: Modificação de Vetor (`ChangeWvector.c`)**: Exibe o vetor antes e depois das mudanças por ponteiros.

**Extras da Unidade 5:**
* **Fibonacci (`FibonacciRecursive.c`)**: Cálculo do n-ésimo termo da sequência.

---

## Lista: Vetores e Strings (Unidade 6)
Foco em manipulação de conjuntos de dados e cadeias de caracteres sem bibliotecas externas complexas.

1. **Exercício 1: Armazenamento em Vetor (`ArrayInput.c`)**: Leitura de 10 números e exibição na ordem original.
2. **Exercício 2: Estatísticas de Vetor (`VectorStatsCalculatorInteger.c`)**: Calcula média, maior e menor valor usando funções.
3. **Exercício 3: Apresentar Pares (`EvenNumberVetor.c`)**: Lê n valores e filtra apenas os números pares.
4. **Exercício 4: Divisão Par/Ímpar (`EvenOddVetor.c`)**: Separa elementos em dois vetores distintos sem posições vazias.
5. **Exercício 5: Contagem de Dígitos (`ContDigitos.c`)**: Identifica a frequência de cada dígito (0-9) em um número inteiro.
6. **Exercício 6: Busca e Substituição (`FindX.c`)**: Localiza o valor X e substitui ocorrências por zero.
7. **Exercício 7: Vetor de Referência X (`FindXvetor.c`)**: Evolução do exercício anterior utilizando um vetor para busca.
8. **Exercício 8: Ordenação Pivotada (`OrderbyX.c`)**: Ordena à esquerda de X de forma crescente e à direita de forma decrescente.
9. **Exercício 9: Verificador de Palíndromo (`palindrome.c`)**: Identifica se uma palavra é igual quando lida de trás para frente.
10. **Exercício 10: Contagem de Vogais (`vowelVector.c`)**: Conta e imprime a quantidade de vogais em uma string.
11. **Exercício 11: Criptografia de Vogais (`transcriptVowel.c`)**: Substitui vogais por números (A=4, E=3, I=1, O=0).
12. **Exercício 12: Tamanho de String Manual (`tamString.c`)**: Calcula o comprimento da string sem usar `string.h`.
13. **Exercício 13: Busca de Palavra (`findPhrases.c`)**: Localiza uma palavra específica dentro de uma frase.

**Extras da Unidade 6:**
* **Matriz Diagonal (`AboveSecondaryDiagonal.c`)**: Manipulação de elementos acima da diagonal secundária.
* **Calculadora de Vetor Adicional (`modularCalculatorArrzy.c`)**: Versão alternativa da calculadora utilizando vetores.
