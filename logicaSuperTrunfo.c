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

    int menu;
    int menu2;
    int batalha = 0;


//menu interativo
    printf("Olá, bem-vindo ao Maker de Cards do Super Trunfo Cidades!\n\n");

do{

    printf("O que gostaria de fazer agora?\n");
    printf("1. Criar Minhas Cartas\n");
    printf("2. Batalhar\n");
    printf("3. Sair do Maker\n");
    scanf("%d", &menu);
    printf("\n");

    switch(menu) {
        case 1:
            printf("Vamos começar...\n\n");
            batalha++;
            break;
        case 2:
            printf("Você ainda não possui cartas criadas!\n\n");
            break;
        case 3: 
            printf("Saindo...\n\n");
            return 0;
        default:
            printf("esta nãoé uma opção válida!\n\n");
            break;
            
    }

} while (batalha == 0);

//bloco de dados destinado à coleta dos dados das cartas:
    printf("Digite o nome da primeira cidade:\n");
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

do {
    printf("O que gostaria de fazer agora?\n\n");
    printf("1. Batalhar\n");
    printf("2. Sair do Maker\n");
    scanf("%d", &menu);
    printf("\n");

    switch(menu) {
        case 1:
            printf("Qual atributo gostaria de comparar?\n\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de Pontos Turísticos\n");
            printf("5. Pib per Capita\n");
            printf("6. Densidade populacional\n");
            printf("7. SUPER\n");
            printf("8. TODOS OS ATRIBUTOS\n");
            scanf("%d", &menu2);
            printf("\n");

            switch(menu2) {
                case 1:
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (populacao > populacao2) {printf("População: %s > %s\n", nome, nome2); 
                    } else if (populacao < populacao2) {printf("População: %s < %s\n", nome, nome2); 
                } else {printf("População: %s = %s\n", nome, nome2);     
            }
            break;

                case 2: 
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (area > area2) {printf("Área: %s > %s\n", nome, nome2); 
                    } else if (area < area2) {printf("População: %s < %s\n", nome, nome2); 
                } else {printf("População: %s = %s\n", nome, nome2);
            }
            break;

                case 3: 
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (pib > pib2) {printf("PIB: %s > %s\n", nome, nome2);
                    } else if (pib < pib2) {printf("PIB: %s < %s\n", nome, nome2); 
                } else {printf("PIB: %s = %s\n", nome, nome2);
            }
            break;

                case 4:
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (turistico > turistico2) {printf("Pontos Turísticos: %s > %s\n", nome, nome2); 
                    } else if (turistico < turistico2) {printf("Pontos Turísticos: %s < %s\n", nome, nome2);
                } else {printf("Pontos Turísticos: %s = %s\n", nome, nome2);
            }
            break;

                case 5:
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (pibpercap > pibpercap2) {printf("PIB Per Capita: %s > %s\n", nome, nome2);
                    } else if (pibpercap < pibpercap2) {printf("PIB Per Capita: %s < %s\n", nome, nome2);
                } else {printf("PIB Per Capita: %s = %s\n", nome, nome2);
            }
            break;

                case 6:
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (densidadepop > densidadepop2) {printf("Densidade Populacional: %s > %s\n", nome, nome2);
                    } else if (densidadepop < densidadepop2) {printf("Densidade Populacional: %s < %s\n", nome, nome2);
                } else {printf("Densidade Populacional: %s = %s\n", nome, nome2);
            }
            break;

                case 7:
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
                    if (super > super2) {printf("~SUPER!:~ %s > %s\n\n", nome, nome2);
                    } else if (super < super2) {printf("~SUPER!:~ %s < %s\n\n", nome, nome2);
                } else {printf("~SUPER!:~ %s = %s\n\n", nome, nome2);
            }
            break;

                case 8:
                    printf("Vamos ver qual delas é a mais forte: --------------------------\n\n");
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

                                if (densidadepop > densidadepop2) {printf("Densidade Populacional: %s > %s\n", nome, nome2); ponto2++;
                            } else if (densidadepop < densidadepop2) {printf("Densidade Populacional: %s < %s\n", nome, nome2); ponto++;
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

                    break;

                default:
                    printf("esta não é uma opção válida!\n\n");
                    break;
            }
            break;
        case 2:
        printf("Saindo...\n");
        return 0;
        }

    } while (batalha == 1);


    return 0;
}
