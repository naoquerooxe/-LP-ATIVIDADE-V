#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    char admissao[200];
    char contratacao[200];
    char endereco[200];
    char telefone[200];
    char nomesalario[200];
    char salarioatual[200];
    char salarionovo[200];
    char nomepromovido[200];
    char cargopromovido[200];
    char demissao[200];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    do
    {

        printf("\n");
        printf("-----MENU-----\n");
        printf("1. Admissão\n");
        printf("2. Ajuste salarial\n");
        printf("3. Promoções\n");
        printf("4. Demissão\n");
        printf("5. Atualizações\n");
        printf("0. Sair\n");
        printf("--------------\n");
        printf("\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Digite o nome do novo contratado: ");
            scanf("%s", &admissao);
            printf("Tipo de contratações:\n");
            scanf("%s", &contratacao);
            printf("Informe seu endereço:\n");
            scanf("%s", &endereco);
            printf("informe o número de telefone:\n");
            scanf("%s", &telefone);
            printf("\n");
            printf("Carregando admissão...\n");

            i++;

            break;
        case 2:
            printf("Em qual funcionário será feito o reajuste?: ");
            scanf("%s", &nomesalario);
            printf("Qual é o salario atual de %s?:", nomesalario);
            scanf("%s", &salarioatual);
            printf("Em quanto ficará o salário de %s?: ", nomesalario);
            scanf("%s", &salarionovo);
            printf("\n");
            printf("O salário de %s mudou de %s para %s \n", nomesalario, salarioatual, salarionovo);

            j++;

            break;
        case 3:
            printf("Qual funcionário será promovido?:\n");
            scanf("%s", &nomepromovido);
            printf("Qual será o futuro cargo de %s:\n", nomepromovido);
            scanf("%s", &cargopromovido);
            printf("\n");
            printf("O funcionário %s agora é %s \n", nomepromovido, cargopromovido);

            k++;

            break;
        case 4:
            printf("Digite o nome do funcionário a ser demitido: ");
            scanf("%s", &demissao);
            printf("\n");
            printf("Enviando aviso...\n");

            l++;

            break;
        case 5:
            printf("- Atualizações: \n");
            printf("Contratações: %d\n", i);
            printf("Ajuste salarial: %d \n", j);
            printf("Promoções: %d \n", k);
            printf("Demissões: %d \n", l);
            printf("\n");

            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}