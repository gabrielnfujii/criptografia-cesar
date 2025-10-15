/*Este c�digo em C permite criptografar ou descriptografar uma mensagem de um arquivo de texto usando a cifra de C�sar com uma chave escolhida pelo usu�rio, salvando o resultado em um novo arquivo.
 O usu�rio fornece o caminho para o arquivo de entrada, escolhe a opera��o (criptografar ou descriptografar) e a chave, e o programa realiza a opera��o desejada.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

bool ehInteiro(const char *input) {
    int i = 0;
    if (input[0] == '-' || input[0] == '+') {
        i = 1;
    }
    for (; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            return false;
        }
    }
    return true;
}

void criptografarMensagem(char *mensagem, int chave) {
    int i;
    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] >= 'a' && mensagem[i] <= 'z') {
            mensagem[i] = 'a' + (mensagem[i] - 'a' + chave) % 26;
        } else if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = 'A' + (mensagem[i] - 'A' + chave) % 26;
        }
    }
}

void descriptografarMensagem(char *mensagem, int chave) {
    criptografarMensagem(mensagem, 26 - (chave % 26));
}

void definirCor(int cor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}

int main() {

    setlocale(LC_ALL, "");

    int chave;
    int escolha;
    char nomeArquivo[256];
    char nomeArquivoSaida[256];
    FILE *arquivo;
    FILE *arquivoSaida;
    char sair[10];

    while (1) {
        system("cls");

        definirCor(14);
        printf("===========================================================\n");
        printf("                Criptografia de C�sar em C               \n");
        printf("===========================================================\n\n");
        definirCor(15);

        printf("Digite o caminho completo para o arquivo .txt: ");
        scanf(" %255[^\n]", nomeArquivo);

        arquivo = fopen(nomeArquivo, "r");

        if (arquivo == NULL) {
            definirCor(12);
            printf("Erro: Falha ao abrir o arquivo de entrada.\n");
            definirCor(15);
            return 1;
        }

        char mensagem[100];

        fgets(mensagem, sizeof(mensagem), arquivo);
        fclose(arquivo);

        do {
            printf("\nEscolha a opera��o:\n");
            printf("1 - Criptografar\n");
            printf("2 - Descriptografar\n");
            scanf("%d", &escolha);

            if (escolha != 1 && escolha != 2) {
                definirCor(12);
                printf("Erro: Escolha inv�lida. Por favor, tente novamente.\n");
                definirCor(15);
            }
        } while (escolha != 1 && escolha != 2);

        printf("\nDigite a chave de criptografia (um n�mero inteiro): ");
        char entradaChave[50];
        scanf("%s", entradaChave);

        if (!ehInteiro(entradaChave)) {
            definirCor(12);
            printf("Erro: A chave deve ser um n�mero inteiro. Por favor, tente novamente.\n");
            definirCor(15);
            Sleep(2000);
            continue;
        }

        sscanf(entradaChave, "%d", &chave);

        if (escolha == 1) {
            criptografarMensagem(mensagem, chave);
            snprintf(nomeArquivoSaida, sizeof(nomeArquivoSaida), "SaidaCRIPTO.txt");

        } else if (escolha == 2) {
            descriptografarMensagem(mensagem, chave);
            snprintf(nomeArquivoSaida, sizeof(nomeArquivoSaida), "SaidaDESCRIPTO.txt");
        }

        arquivoSaida = fopen(nomeArquivoSaida, "w");

        if (arquivoSaida == NULL) {
            definirCor(12);
            printf("Erro: Falha ao criar o arquivo de sa�da.\n");
            definirCor(15);
            return 1;
        }

        fputs(mensagem, arquivoSaida);
        fclose(arquivoSaida);

        definirCor(10);
        printf("\nOpera��o conclu�da com sucesso. O resultado foi salvo em %s\n", nomeArquivoSaida);
        definirCor(15);

        Sleep(2000);
    }

    return 0;
}
