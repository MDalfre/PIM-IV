#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//Importando as funções descritas em /Services
#include "LugaresDisponiveis.h"
#include "Ingressos.h"
#include "ImprimeBilhete.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Unip - PIM IV\n");
	//Variavies Principais
	char Poltrona[10][10] = {""};
	double ValorEntrada;
	double ValorEntradaFinal;
	int fila, poltrona;
	int dia, mes, ano, semana;
	char NomePeca[37] = "";
	double ValorTotal = 0;
	char Start = 's';
	
	void Calendario(){
		time_t t = time(NULL);
  		struct tm tm = *localtime(&t);
  		dia = tm.tm_mday;
  		mes = tm.tm_mon + 1;
  		ano = tm.tm_year+1900;
  		semana = 2;
  		printf("Data - %d/%d/%d \n", dia,mes,ano );
  		if(semana == 2){
  			printf("Hoje e Terca-Feira, dia de desconto !\n");
		  }
		
	}
	
	void InicioSistema (){
		printf("Iniciando Sessao ...\n");
		Calendario();
		printf("Digite o nome da peca: ");
		scanf("%[^\n]s", NomePeca);
		setbuf(stdin, NULL);
		printf("Digite o Valor do Ingresso: ");
		scanf("%lf", &ValorEntrada);
		//Sleep(2000);
		system("cls");

	}
	
	void EscolheLugar(){
		LugaresDisponiveis(Poltrona);
		printf("Digite a fila: ");
		scanf("%i", &fila);
		printf("Digite a Poltrona: ");
		scanf("%i", &poltrona);
		
		if(Poltrona[fila-1][poltrona-1] == 'X'){
			printf("Poltrona Indisponivel !");
			EscolheLugar();
		}else{
			Poltrona[fila-1][poltrona-1] = 'X';
			LugaresDisponiveis(Poltrona);
		}

		
	}
	
	void Orquestrador(){
		ValorEntradaFinal = Ingresso(ValorEntrada, semana);
		system("cls");
		printf("Valor do Ingresso: R$%.2f \n", ValorEntrada);
		printf("Valor do Ingresso com desconto: R$%.2f \n", ValorEntradaFinal);
		EscolheLugar();
		ImprimeBilhete(ValorEntradaFinal, fila, poltrona, dia, mes, ano, NomePeca);
		ValorTotal = ValorTotal + ValorEntradaFinal;
		printf("Deseja realizar outra venda ? [S - Sim/ N - Nao]: ");
    	scanf("%s", &Start);
    	system("cls");

	}
	
	//Inicio
	InicioSistema();
	while( Start == 's') {
		Orquestrador();
	}
	

	return 0;
}
