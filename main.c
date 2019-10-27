#include <stdio.h>
#include <stdlib.h>
//Importando as funções descritas em /Services
#include "LugaresDisponiveis.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Unip - PIM IV\n");
	
	char Poltrona[10][10] = {
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'},
		{'1','2','3','4','5','6','7','8','9','0'}
	};
	
	LugaresDisponiveis(Poltrona);
	
	int fila, poltrona;
	
	printf("Digite a fila: ");
	scanf("%i", &fila);
	printf("\n");
	printf("Digite a Poltrona: ");
	scanf("%i", &poltrona);
	Poltrona[fila-1][poltrona-1] = 'X';
	printf("clear");
	
	LugaresDisponiveis(Poltrona);
	return 0;
}
