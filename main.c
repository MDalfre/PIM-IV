#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//Importando as fun��es descritas em /Services
#include "LugaresDisponiveis.h"
#include "Ingressos.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Unip - PIM IV\n");
	
	char Poltrona[10][10] = {""};
	double ValorEntrada = 10.0;
	int fila, poltrona;
	int dia, mes, ano, semana;
	
	void Calendario(){
		time_t t = time(NULL);
  		struct tm tm = *localtime(&t);
  		dia = tm.tm_mday;
  		mes = tm.tm_mon + 1;
  		ano = tm.tm_year+1900;
  		semana = tm.tm_wday;
  		printf("Data - %d/%d/%d \n", dia,mes,ano );
		
	}

	
	void InicioSistema (){
		printf("Iniciando Sessao ...\n");
		Calendario();
		Sleep(2000);
		system("cls");

		
	}
	
	InicioSistema();
	

	
	
	
	LugaresDisponiveis(Poltrona);
	
	
	
	printf("Digite a fila: ");
	scanf("%i", &fila);
	printf("Digite a Poltrona: ");
	scanf("%i", &poltrona);
	Poltrona[fila-1][poltrona-1] = 'X';
	system("cls");
	
	LugaresDisponiveis(Poltrona);
	printf ("%.2f",Ingresso(ValorEntrada, semana));
	return 0;
}
