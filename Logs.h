void Logs(double Logs[100][6], int Lugares, float ValorTotal) {

    int i;
    system("cls");
    system("color 0c");
    printf(" ------[Log de Vendas]------\n");
    printf("\n");
    printf("Lugares Vendidos: %i \n", Lugares + 100);
    //Percorre a matris de logs em busca das entradas, e as imprime na tela de forma cronológica.
    for (i = 0; i < 100; i++) {
        if (Logs[i][0] != 0) {
            printf(" %d - Data Venda: %.f/%.f/%.f , Fila: %.f Poltrona: %.f - Valor: R$%.02f \n", i, Logs[i][0], Logs[i][1], Logs[i][2], Logs[i][4], Logs[i][5], Logs[i][3]);

        }

    }
    printf(" \n");
    printf("Valor todal de vendas: R$%.2f \n", ValorTotal);
    printf(" \n");
    system("PAUSE");

}
