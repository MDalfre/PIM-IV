#include <stdio.h>

#include <stdlib.h>
 //Importado para exibição das datas do sistema.
#include <time.h>

#include <windows.h>
 //Importando as funções descritas em /Services
#include "LugaresDisponiveis.h"

#include "Ingressos.h"

#include "ImprimeBilhete.h"

#include "Logs.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Variavies Principais
char Poltrona[10][10];
double ValorEntrada;
int Lugares = 1;
double ValorEntradaFinal;
int fila, poltrona;
int dia, mes, ano, semana;
char NomePeca[37] = "";
double ValorTotal = 0;
char Start = 's';
int i, e;
double logs[100][6] = {};

//Inicia o calendário do sistema, e checa o dia da semana
void Calendario() {
    //Inicia o calendário.
    time_t t = time(NULL);
    struct tm tm = * localtime( & t);
    dia = tm.tm_mday;
    mes = tm.tm_mon + 1;
    ano = tm.tm_year + 1900;
    semana = tm.tm_wday;
    printf(" - Data - %d/%d/%d \n", dia, mes, ano);
    //Checa o dia da semana.
    if (semana == 0) {
        printf("Hoje e Domingo!\n");
    } else if (semana == 1) {
        printf("Hoje e Segunda-Feira!\n");
    } else if (semana == 2) {
        printf("Hoje e Terca-Feira, dia de desconto !\n");
    } else if (semana == 3) {
        printf("Hoje e Quarta-Feira!\n");
    } else if (semana == 4) {
        printf("Hoje e Quinta-Feira!\n");
    } else if (semana == 5) {
        printf("Hoje e Sexta-Feira!\n");
    } else if (semana == 6) {
        printf("Hoje e Sabado!\n");
    } else {
        printf("ERRO!\n");
    }

}

//Inicia o sistema de vendas, solicitando as informações da Peça em questão.
void InicioSistema() {
    system("color 0E");
    printf("Iniciando Sessao ...\n");
    Sleep(5000);
    system("cls");
    printf("------[Teatro System]------\n");
    Calendario();
    Sleep(1000);
    printf("Digite o nome da peca: ");
    scanf("%[^\n]s", & NomePeca);
    setbuf(stdin, NULL);
    printf("\n");
    printf("Digite o Valor do Ingresso: ");
    if (scanf("%lf", & ValorEntrada) != 1) {
        system("cls");
        printf("O valor do ingresso deve ser numerico !\n");
        Sleep(1000);
        system("cls");
        InicioSistema();
    } else {

        system("cls");
        system("color 07");
        //Preenche a matris de poltronas com '.' .
        for (i = 0; i <= 9; i++) {
            for (e = 0; e <= 9; e++) {
                Poltrona[i][e] = 'X';
            }
        }
    }

}

//Exibe os lugares disponiveis, e atribui a escolha de assentos.
void EscolheLugar() {
    LugaresDisponiveis(Poltrona);
    printf("Digite a fila: ");
    scanf("%i", & fila);
    printf("Digite a Poltrona: ");
    scanf("%i", & poltrona);
    if (fila <= 0 || fila >= 11) {
        system("cls");
        printf("Numero da fila invalido!\n");
        Sleep(1000);
        system("cls");
        EscolheLugar();

    } else if (poltrona <= 0 || poltrona >= 11) {
        system("cls");
        printf("Numero da poltrona invalido!\n");
        Sleep(1000);
        system("cls");
        EscolheLugar();

    } else {

        if (Poltrona[fila - 1][poltrona - 1] == 'X') {
            system("cls");
            printf("Poltrona Indisponivel !");
            Sleep(1000);
            system("cls");
            EscolheLugar();
        } else {
            Poltrona[fila - 1][poltrona - 1] = 'X';
            Lugares = LugaresDisponiveis(Poltrona);
        }
    }

}

void LogSave() {
    ValorTotal = ValorTotal + ValorEntradaFinal;
    logs[Lugares][0] = dia;
    logs[Lugares][1] = mes;
    logs[Lugares][2] = ano;
    logs[Lugares][3] = ValorEntradaFinal;
    logs[Lugares][4] = fila;
    logs[Lugares][5] = poltrona;
}

//Exibe os logs do sistema
void ExibirLogs() {
    Logs(logs, Lugares, ValorTotal);

}

//Orquestra toda rotina de venda de ingressos.
void Orquestrador() {
    ValorEntradaFinal = Ingresso(ValorEntrada, semana);
    system("cls");
    system("color 0C");
    printf("Valor do Ingresso: R$%.2f \n", ValorEntrada);
    printf("Valor do Ingresso com desconto: R$%.2f \n", ValorEntradaFinal);
    //Checa se todas as poltronas já foram vendidas.
    if (Lugares == 100) {
        system("cls");
        printf("Todas as poltronas ja foram vendidas !\n");
        Start = 'N';
        Sleep(1000);
        system("cls");
        ExibirLogs(logs);

    } else {
        EscolheLugar();
    }
    LogSave();
    ImprimeBilhete(ValorEntradaFinal, fila, poltrona, dia, mes, ano, NomePeca);
    printf("Deseja realizar outra venda ? [S - Sim] ou qualquer outra tecla para Logs: ");
    scanf("%s", & Start);
    system("cls");

}

int main(int argc, char * argv[]) {
    printf("------[Unip - PIM IV]------\n");
    printf("\n");
    printf("         [Alunos]          \n");
    printf("\n");
    printf(" - Marcio Henrique Dalfre RA: 0506960\n");
    printf("\n");

    //Inicio do Loop de vendas.
    InicioSistema();
    while (Start == 's' || Start == 'S') {
        Orquestrador();
    }
    ExibirLogs(logs);

    return 0;
}
