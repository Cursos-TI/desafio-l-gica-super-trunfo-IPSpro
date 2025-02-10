#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    char nome[100];
    int populacao;
    double area;
    int pib;
    int turistico;
    double pibpercap;
    double densidadepop;
    int super;

//bloco de dados destinado à coleta dos dados das cartas:
    printf("Olá, bem-vindo ao Maker de Cards do Super Trunfo Cidades\nPara começar, digite o nome da cidade:\n");
    scanf("%14s", nome); //Uso do núemero 14 antes do s em #s para assegurar que o usuário não ultrapasse o limite de caracteres definido.

    printf("%s possui quantos habitantes?\n", nome); //utilização da primeira informação concebida pela usuário sendo representado pelo "%s".
    scanf("%d", &populacao);

    printf("qual a sua área em km²? (utilize \".\" (ponto) para números decimais)\n");
    scanf("%lf", &area);

    printf("Qual é o PIB em R$?\n"); //o \(contra-barra) permite utilizar aspas em meio a uma frase.
    scanf("%d", &pib);

    printf("Quantos pontos turísticos %s possui?\n", nome); //utilização da primeira informação concebida pela usuário sendo representado pelo "%s".
    scanf("%d", &turistico);
    printf("\n");

    pibpercap = (double) pib / (double) populacao;
    /* para calculo do PIB per Capita, como o resultado pode ser decimal, é
necessário converter os dados, mas somente na saída. */

    densidadepop = (double) populacao / area;
    /* no caso da densidade Populacional é necessário converter, como são
dois tipos diferentes de dados.*/

    //O super sendo um int(neste caso) não é necessário converter as variáveis.
    super += populacao + area + pib + turistico + pibpercap + densidadepop;

//Impressão na tela de todos os dados da carta
    printf ("Carta gerada com sucesso!\n\nCódigo: A01\nNome: %s\nPopulação: %d habitantes\nÁrea: %.1lfkm²\nPIB(Produto Interno Bruto): R$%d\nQuantidade de Pontos Turísticos: %d\nPIB per Capita: R$%.2lf\nDensidade Populacional: %.2lf Habitantes por Quilômetro Quadrado\n~SUPER!~: %d\n\n",
    nome, populacao, area, pib, turistico, pibpercap, densidadepop, super);

    char nome2[100];
    int populacao2;
    double area2;
    int pib2;
    int turistico2;
    double pibpercap2;
    double densidadepop2;
    int super2;

//bloco de dados destinado à coleta dos dados da segunda carta:
    printf("Hora da Segunda Carta! digite o nome da cidade:\n");
    scanf("%14s", nome2); //Uso do núemero 14 antes do s em #s para assegurar que o usuário não ultrapasse o limite de caracteres definido.

    printf("%s possui quantos habitantes?\n", nome2); //utilização da primeira informação concebida pela usuário sendo representado pelo "%s".
    scanf("%d", &populacao2);

    printf("qual a sua área em km²? (utilize \".\" (ponto) para números decimais)\n");
    scanf("%lf", &area2);

    printf("Qual é o PIB em R$?\n"); //o \(contra-barra) permite utilizar aspas em meio a uma frase.
    scanf("%d", &pib2);

    printf("Quantos pontos turísticos %s possui?\n", nome2); //utilização da primeira informação concebida pela usuário sendo representado pelo "%s".
    scanf("%d", &turistico2);
    printf("\n");

    pibpercap2 = (double) pib2 / (double) populacao2;
    /* para calculo do PIB per Capita, como o resultado pode ser decimal, é
necessário converter os dados, mas somente na saída. */

    densidadepop2 = (double) populacao2 / area2;
    /* no caso da densidade Populacional é necessário converter, como são
dois tipos diferentes de dados.*/

    //O super sendo um int(neste caso) não é necessário converter as variáveis.
    super2 += populacao2 + area2 + pib2 + turistico2 + pibpercap2 + densidadepop2;

//Impressão na tela de todos os dados da carta
    printf ("Carta gerada com sucesso!\n\n");

    printf ("Código: A02\nNome: %s\nPopulação: %d habitantes\nÁrea: %.1lfkm²\nPIB(Produto Interno Bruto): R$%d\nQuantidade de Pontos Turísticos: %d\nPIB per Capita: R$%.2lf\nDensidade Populacional: %.2lf Habitantes por Quilômetro Quadrado\n~SUPER!:~ %d\n\n",
    nome2, populacao2, area2, pib2, turistico2, pibpercap2, densidadepop2, super2);

    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");


//Bloco de códigos para o sistema de compração. (Compreendo a existência de uma forma melhor que essa utilizada por mim, entretando, ainda não a domino.)

int ponto = 0;
int ponto2 = 0;

                 if (populacao > populacao2) {printf("População: %s > %s\n", nome, nome2); ponto++;
            } else if (populacao < populacao2) {printf("População: %s < %s\n", nome, nome2); ponto2++;
        } else {printf("População: %s = %s\n", nome, nome2);
    }

                 if (area > area2) {printf("Área: %s > %s\n", nome, nome2); ponto++;
            } else if (area < area2) {printf("População: %s < %s\n", nome, nome2); ponto2++;
        } else {printf("População: %s = %s\n", nome, nome2);
    }

                if (pib > pib2) {printf("PIB: %s > %s\n", nome, nome2); ponto++;
            } else if (pib < pib2) {printf("PIB: %s < %s\n", nome, nome2); ponto2++;
        } else {printf("PIB: %s = %s\n", nome, nome2);
    }

                 if (turistico > turistico2) {printf("Pontos Turísticos: %s > %s\n", nome, nome2); ponto++;
            } else if (turistico < turistico2) {printf("Pontos Turísticos: %s < %s\n", nome, nome2); ponto2++;
        } else {printf("Pontos Turísticos: %s = %s\n", nome, nome2);
    }

                 if (pibpercap > pibpercap2) {printf("PIB Per Capita: %s > %s\n", nome, nome2); ponto++;
            } else if (pibpercap < pibpercap2) {printf("PIB Per Capita: %s < %s\n", nome, nome2); ponto2++;
        } else {printf("PIB Per Capita: %s = %s\n", nome, nome2);
    }

                if (densidadepop > densidadepop2) {printf("Densidade Populacional: %s > %s\n", nome, nome2); ponto++;
            } else if (densidadepop < densidadepop2) {printf("Densidade Populacional: %s < %s\n", nome, nome2); ponto2++;
        } else {printf("Densidade Populacional: %s = %s\n", nome, nome2);
    }

                 if (super > super2) {printf("~SUPER!:~ %s > %s\n\n", nome, nome2); ponto++;
            } else if (super < super2) {printf("~SUPER!:~ %s < %s\n\n", nome, nome2); ponto2++;
        } else {printf("~SUPER!:~ %s = %s\n\n", nome, nome2);
    }

    if (ponto > ponto2) {printf("%s, CIDADE A01 É A CAMPEÃ!\n\n", nome);
            } else if (ponto < ponto2) {printf("%s, CIDADE A02 É A CAMPEÃ!\n\n", nome2);
        } else {printf("WOW!! AS CIDADES %s E %s EMPATARAM!\n\n", nome, nome2);
    }

    return 0;
}
