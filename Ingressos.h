double Ingresso(double valor, int semana) {
    //Variaveis do serviço.
    int idade;
    int professorInt;
    char professor;
    double valorDesconto;
    char criancaCarente;
    int criancaCarenteInt;
    //Realiza as perguntas e respostas para o usuário.
    void Discurso() {
        system("color 0B");
        printf("-----[Identificacao de Cliente]------ \n");
        printf("\n");
        printf("Digite a idade do cliente: ");
        scanf("%i", & idade);
        printf("\n");
        //Checa a idade do cliente, se maior ou igual a 18 anos, pergunta se é professor da rede pública.
        if (idade >= 18) {
            criancaCarenteInt = 2;
            printf("Cliente e professor da rede publica ? [S - Sim/ N - Nao]: ");
            scanf("%s", & professor);
            printf("\n");
            //Valida a entrada de dados.
            if (professor == 'S' || professor == 's') {
                professorInt = 1;
            } else if (professor == 'N' || professor == 'n') {
                professorInt = 2;
            } else {
                professorInt = 0;
                printf("Erro na entrada de Professor \n");

            }
            //Checa a idade do cliente, se menor que 18 anos, pergunta se é criança da rede publica.
        } else if (idade < 18) {
            professorInt = 2;
            printf("Crianca carente da rede publica ? [S - Sim/ N - Nao]: ");
            scanf("%s", & criancaCarente);
            printf("\n");
            //Valida a entrada de dados.
            if (criancaCarente == 'S' || criancaCarente == 's') {
                criancaCarenteInt = 1;
            } else if (criancaCarente == 'N' || criancaCarente == 'n') {
                criancaCarenteInt = 2;
            } else {
                criancaCarenteInt = 0;
                printf("Erro na entrada de Crianca Carente \n");

            }
        }
    }
    //Executa o função Discurso.
    Discurso();
    //Valida a resposta das entradas acima, caso seja inválida, reinicia a função Discurso.
    while (professorInt == 0) {
        Discurso();
    }
    while (criancaCarenteInt == 0) {
        Discurso();
    }
    //Calculo dos descontos com base nas respostas do usuário.
    if (idade >= 2 && idade <= 12) {
        if (criancaCarenteInt == 1 && semana == 2) {
            valorDesconto = 0;
        } else {
            valorDesconto = (valor - valor / 2);
        }

    } else if (idade >= 60) {
        valorDesconto = (valor - valor / 2);
    } else if (professorInt == 1) {
        valorDesconto = (valor - valor / 2);
    } else {
        valorDesconto = valor;
    }
    //Retorna o valor do calculo.
    return valorDesconto;

}
