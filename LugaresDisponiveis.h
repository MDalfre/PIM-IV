int LugaresDisponiveis(char PoltronasDisponiveis[10][10]) {

    int count = 0;
    int i, e;

    //Faz a contagem de poltronas vendidas.
    for (i = 0; i <= 9; i++) {
        for (e = 0; e <= 9; e++) {
            if (PoltronasDisponiveis[i][e] == 'X') {
                count++;
            }
        }
    }
    //Imprime tabela de filas/poltronas.
    printf("Lugares Disponiveis: %i \n", 100 - count);
    printf(" \n");
    printf("         Fila               Poltronas\n");
    printf("               1   2   3   4   5   6   7   8   9  10\n");
    printf("             ----------------------------------------- \n");
    printf("          1 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[0][0], PoltronasDisponiveis[0][1], PoltronasDisponiveis[0][2], PoltronasDisponiveis[0][3], PoltronasDisponiveis[0][4], PoltronasDisponiveis[0][5], PoltronasDisponiveis[0][6], PoltronasDisponiveis[0][7], PoltronasDisponiveis[0][8], PoltronasDisponiveis[0][9]);
    printf("             ----------------------------------------- \n");
    printf("          2 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[1][0], PoltronasDisponiveis[1][1], PoltronasDisponiveis[1][2], PoltronasDisponiveis[1][3], PoltronasDisponiveis[1][4], PoltronasDisponiveis[1][5], PoltronasDisponiveis[1][6], PoltronasDisponiveis[1][7], PoltronasDisponiveis[1][8], PoltronasDisponiveis[1][9]);
    printf("             ----------------------------------------- \n");
    printf("          3 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[2][0], PoltronasDisponiveis[2][1], PoltronasDisponiveis[2][2], PoltronasDisponiveis[2][3], PoltronasDisponiveis[2][4], PoltronasDisponiveis[2][5], PoltronasDisponiveis[2][6], PoltronasDisponiveis[2][7], PoltronasDisponiveis[2][8], PoltronasDisponiveis[2][9]);
    printf("             ----------------------------------------- \n");
    printf("          4 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[3][0], PoltronasDisponiveis[3][1], PoltronasDisponiveis[3][2], PoltronasDisponiveis[3][3], PoltronasDisponiveis[3][4], PoltronasDisponiveis[3][5], PoltronasDisponiveis[3][6], PoltronasDisponiveis[3][7], PoltronasDisponiveis[3][8], PoltronasDisponiveis[3][9]);
    printf("             ----------------------------------------- \n");
    printf("          5 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[4][0], PoltronasDisponiveis[4][1], PoltronasDisponiveis[4][2], PoltronasDisponiveis[4][3], PoltronasDisponiveis[4][4], PoltronasDisponiveis[4][5], PoltronasDisponiveis[4][6], PoltronasDisponiveis[4][7], PoltronasDisponiveis[4][8], PoltronasDisponiveis[4][9]);
    printf("             ----------------------------------------- \n");
    printf("          6 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[5][0], PoltronasDisponiveis[5][1], PoltronasDisponiveis[5][2], PoltronasDisponiveis[5][3], PoltronasDisponiveis[5][4], PoltronasDisponiveis[5][5], PoltronasDisponiveis[5][6], PoltronasDisponiveis[5][7], PoltronasDisponiveis[5][8], PoltronasDisponiveis[5][9]);
    printf("             ----------------------------------------- \n");
    printf("          7 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[6][0], PoltronasDisponiveis[6][1], PoltronasDisponiveis[6][2], PoltronasDisponiveis[6][3], PoltronasDisponiveis[6][4], PoltronasDisponiveis[6][5], PoltronasDisponiveis[6][6], PoltronasDisponiveis[6][7], PoltronasDisponiveis[6][8], PoltronasDisponiveis[6][9]);
    printf("             ----------------------------------------- \n");
    printf("          8 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[7][0], PoltronasDisponiveis[7][1], PoltronasDisponiveis[7][2], PoltronasDisponiveis[7][3], PoltronasDisponiveis[7][4], PoltronasDisponiveis[7][5], PoltronasDisponiveis[7][6], PoltronasDisponiveis[7][7], PoltronasDisponiveis[7][8], PoltronasDisponiveis[7][9]);
    printf("             ----------------------------------------- \n");
    printf("          9 -| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[8][0], PoltronasDisponiveis[8][1], PoltronasDisponiveis[8][2], PoltronasDisponiveis[8][3], PoltronasDisponiveis[8][4], PoltronasDisponiveis[8][5], PoltronasDisponiveis[8][6], PoltronasDisponiveis[8][7], PoltronasDisponiveis[8][8], PoltronasDisponiveis[8][9]);
    printf("             ----------------------------------------- \n");
    printf("          10-| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | \n", PoltronasDisponiveis[9][0], PoltronasDisponiveis[9][1], PoltronasDisponiveis[9][2], PoltronasDisponiveis[9][3], PoltronasDisponiveis[9][4], PoltronasDisponiveis[9][5], PoltronasDisponiveis[9][6], PoltronasDisponiveis[9][7], PoltronasDisponiveis[9][8], PoltronasDisponiveis[9][9]);
    printf("             ----------------------------------------- \n");

    return count;

}
