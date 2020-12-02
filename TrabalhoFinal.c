#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int i;
    long int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0;
    int opcao, numeroPedido, opcaoMenu = 1;
    double total=0;
    long int quantidade, qtdCachoroQ = 0;
    double cachorroQ=0, Xtudo=0, bauru=0, hamburguer=0;
    double cheeseburguer=0, suco=0, refri=0;
    long int quantidadeTotal = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("-----------------------------------------------------------------------\n");

    printf("Opções da Lanchonete: \n");

    printf("-----------------------------------------------------------------------\n\n");


    printf(" 1- Iniciar Pedido\n 2- Apresentar Total de Pedidos\n 3- Sair\n\n");


    scanf("%d", &opcao);


    while(opcao != 3){


        switch(opcao){

            case (1):

                    while(opcaoMenu == 1){
                        printf("\n Descrição         Código    Preço\n");
                        printf("\n Cachorro Quente    001      10,00 \n");
                        printf(" X-Tudo             002      17,00 \n");
                        printf(" Bauru com Ovo      003      15,00 \n");
                        printf(" Hamburguer         004      15,00 \n");
                        printf(" Cheeseburguer      005      17,00 \n");
                        printf(" Suco               006       5,00 \n");
                        printf(" Refrigerante       007       4,00 \n");

                        printf("\nNúmero do pedido: ");
                        scanf("%d", &numeroPedido);
                        printf("\nQuantidade: ");
                        scanf("%ld", &quantidade);

                        if(numeroPedido == 001){
                            total = (total + (10.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            cachorroQ = cachorroQ + (10.00*quantidade);
                            c1 = c1 + quantidade;

                        }

                        else if(numeroPedido == 002){
                            total = (total + (17.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            Xtudo = Xtudo + (17.00*quantidade);
                            c2 = c2 + quantidade;
                        }

                        else if(numeroPedido == 003){
                            total = (total + (15.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            bauru = bauru + (15.00*quantidade);
                            c3 = c3 + quantidade;
                        }

                        else if(numeroPedido == 004){
                            total = (total + (15.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            hamburguer = hamburguer + (15.00*quantidade);
                            c4 = c4 + quantidade;
                        }

                        else if(numeroPedido == 005){
                            total = (total + (17.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            cheeseburguer = cheeseburguer + (17.00*quantidade);
                            c5 = c5 + quantidade;
                        }

                        else if(numeroPedido == 006){
                            total = (total + (5.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            suco = suco + (5.00*quantidade);
                            c6 = c6 + quantidade;
                        }

                        else if(numeroPedido == 007){
                            total = (total + (4.00*quantidade));
                            quantidadeTotal = quantidadeTotal + quantidade;
                            refri = refri + (4.00*quantidade);
                            c7 = c7 + quantidade;
                        }

                        else{
                            printf("\nNúmero do pedido não existe");
                        }

                        printf("\n\n Adicionar mais itens?\n\n 1-Sim\n 2-Não\n\n");
                        scanf("%d", &opcaoMenu);

                    }break;


            case(2):
                printf("\n\n\n******************************************\n");
                printf("\n\nQuantidade total de Itens comprados = %ld\n\n\n", quantidadeTotal);

                if(c1 > 0){
                    printf("%d Cachorro(s) Quente(s) = %.2lf\n", c1, cachorroQ);

                }

                if(c2 > 0){
                    printf("%d X-Tudo(s) = %.2lf\n", c2, Xtudo);

                }
                if(c3> 0){
                    printf("%d Bauru(s) com Ovo = %.2lf\n", c3, bauru);

                }
                if(c4 > 0){
                    printf("%d X-Tudo(s) = %.2lf\n", c4, hamburguer);

                }
                if(c5 > 0){
                    printf("%d Cheeseburguer(s) = %.2lf\n", c5, cheeseburguer);

                }
                if(c6 > 0){
                    printf("%d Suco(s) = %.2lf\n", c6, suco);

                }
                if(c7 > 0){
                    printf("%d Refrigerante(s) = %.2lf\n", c7, refri);

                }

                printf("\n\nValor Total = %.2lf\n", total);

                printf("\n\n******************************************\n\n");

                opcao = 3;
                break;




            default:
                printf("\n\nOpção Inválida\n\n");
                opcao = 3;

        }

            if(opcao == 1){
            printf("\n\n 2-Apresentar Total de Pedidos\n 3-Sair\n\n");
            scanf("%d", &opcao);
            }


    }

    printf("\n\nPedido Finalizado\n\n\n\n");
    system("pause");

}
