/*Considerando o Sistema Triangular Inferior abaixo, implemente o algoritmo apresentado na aula para
solucioná-lo.
Crie e utilize um procedimento para calcular e imprimir a solução do Sistema.
Devem ser criados uma matriz para armazenar L e dois vetores: um para armazenar os valores de x e
outro para os valores de b.
Obs. 1.: Todas as matrizes e vetores utilizados devem ser declarados na função main;
Obs. 2.: Seu algoritmo pode ser testado com qualquer outro Sistema Triangular Inferior;
Obs. 3.: Repare que o algoritmo não apresenta qualquer estrutura de seleção. Assim, seu algoritmo não
pode conter este tipo de estrutura.
L = {2,0,0
1,4,0
1,1,1}
b={2,-3,1}*/

//Aluno: Felipe Muros

/*Considerando o Sistema Triangular Inferior abaixo, implemente o algoritmo apresentado na aula para
solucioná-lo.
Crie e utilize um procedimento para calcular e imprimir a solução do Sistema.
Devem ser criados uma matriz para armazenar L e dois vetores: um para armazenar os valores de x e
outro para os valores de b.
Obs. 1.: Todas as matrizes e vetores utilizados devem ser declarados na função main;
Obs. 2.: Seu algoritmo pode ser testado com qualquer outro Sistema Triangular Inferior;
Obs. 3.: Repare que o algoritmo não apresenta qualquer estrutura de seleção. Assim, seu algoritmo não
pode conter este tipo de estrutura.
L = {2,0,0
1,4,0
1,1,1}
b={2,-3,1}*/

//Aluno: Felipe Muros

#include <stdio.h>

#define TAM 3

void calculaEImprimeMatriz(int L[TAM][TAM], int b[TAM], int x[TAM]){
    int soma;
    for (int i = 0; i < TAM; i++)
    {
        soma = 0;
        for (int j = 0; j < i; j++)
        {
            soma = soma + L[i][j] * x[j];
        }
        x[i] = (b[i] - soma) / L[i][i];
    }
    printf("Solucao do sistema: \n");
    for (int i = 0; i < TAM; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
}

int main(){
    int L[TAM][TAM] = {{2,0,0},{1,4,0},{1,1,1}};
    int b[TAM]= {2,-3,1};
    int x[TAM];
    calculaEImprimeMatriz(L, b, x);
    return 0;
}





