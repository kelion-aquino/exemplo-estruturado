#include <stdio.h>

int main(void)
{

    // Cal. data em meses
    int anoAtual = 0;
    int anoRev = 0;
    int mesAtual = 0;
    int mesRev = 0;
    int mesesRev = 0;

    // outras infos
    int anoCarroFab = 0;
    int kmTotal = 0;
    int kmRev = 0;
    int kmDiff = 0;

    // Item ou serviço
    char alinhamentoPneus[] = "Alinhamento dos pneus";
    char correias[] = "Correia dentada \n==> Correia do alternador \n==> Correia do compressor do ar-condicionado \n==> Correia poly-v (bomba d'agua)";
    char filtroCabine[] = "Filtro de cabine (antipolen)";
    char filtroCombustivel[] = "Filtro de combustivel";
    char fluidoTrans[] = "Fluido das transmissoes";
    char fluidoFreio[] = "Fluido de freio (oleo do freio)";
    char limpezaAr[] = "Limpeza do ar condicionado";
    char arrefecimento[] = "Liquido de arrefecimento \n==>Limpeza do sistema de arrefecimento";
    char oleo[] = "Oleo lubrificante \n==>Filtro de oleo \n==>Filtro de ar";
    char pneus[] = "Pneus";
    char velas[] = "Velas";

    // Item
    // char aguaLimpador[] = "Água do limpador de parabrisa";
    // char buzina[] = "Buzina";
    // char cintosDeSeguranca[] = "Cintos de segurança";
    // char embreagem[] = "Embreagem";
    // char estepe[] = "Estepe";
    // char fluidoDirecaoHidraulica[] = "Fluido da direção hidráulica";
    // char fluidoFreio[] = "Fluido de freio (óleo de freio)";
    // char limpadoresParabrisa[] = "Limpadores de parabrisa";
    // char luzes[] = "Luzes";
    // char pneus[] = "Pneus";
    // char sistemasCarga[] = "Sistema de carga";
    // char sistemaFreios[] = "Sistema de freios";
    // char sistemaSuspensao[] = "Sistema de suspensão";

    //INPUT
    printf("=== Infos. de ano ===");
    printf("\nDigite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o mes atual: ");
    scanf("%d", &mesAtual);
    printf("Digite o ano da ultima revisao: ");
    scanf("%d", &anoRev);
    printf("Digite o mes da ultima revisao: ");
    scanf("%d", &mesRev);

    mesesRev = calculaTempo(anoAtual, mesAtual, anoRev, mesRev);

    printf("Digite a km TOTAL do seu carro: ");
    scanf("%d", &kmTotal);

    // se nunca fez, coloca ZERO!!!
    printf("Digite a km na ULTIMA revisao: ");
    scanf("%d", &kmRev);
    printf("=====================");

    kmDiff = diffKM(kmRev, kmTotal);

    printf("\n*** Itens de troca obrigatoria: ***\n");
    // km
    // 100.000 km && kmDiff = 0
    if (100000 <= kmDiff)
    {
        printf("==> %s\n", correias);
        printf("==> %s\n", alinhamentoPneus);
        printf("==> %s\n", oleo);
        printf("==> %s\n", filtroCombustivel);
        printf("==> %s\n", velas);
        printf("==> %s\n", fluidoTrans);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        1);
    }
    // 60.000 km
    else if (60000 <= kmDiff)
    {

        printf("==> %s\n", correias);
        printf("==> %s\n", alinhamentoPneus);
        printf("==> %s\n", oleo);
        printf("==> %s\n", filtroCombustivel);
        printf("==> %s\n", velas);
        printf("==> %s\n", fluidoTrans);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        1);
    }
    // 40.000 km
    else if (40000 <= kmDiff)
    {
        printf("==> %s\n", correias);
        printf("==> %s\n", alinhamentoPneus);
        printf("==> %s\n", oleo);
        printf("==> %s\n", filtroCombustivel);
        printf("==> %s\n", velas);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        0);
    }
    // 20.000 km
    else if (20000 <= kmDiff)
    {

        printf("==> %s\n", correias);
        printf("==> %s\n", alinhamentoPneus);
        printf("==> %s\n", oleo);
        printf("==> %s\n", filtroCombustivel);
        printf("==> %s\n", velas);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        0);
    }
    // 15.000 km
    else if (15000 <= kmDiff)
    {
        printf("==> %s\n", alinhamentoPneus);
        printf("==> %s\n", oleo);
        printf("==> %s\n", velas);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        0);
    }
    // 10.000 km
    else if (10000 <= kmDiff)
    {
        printf("==> %s\n", alinhamentoPneus);
        printf("==> %s\n", oleo);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        0);
    }
    // 5.000 km
    else if (5000 <= kmDiff)
    {
        printf("==> %s\n", oleo);

        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        0);
    }
    else
    {
        manutencaoTempo(filtroCabine,
                        fluidoFreio,
                        limpezaAr,
                        arrefecimento,
                        fluidoTrans,
                        pneus,
                        mesesRev,
                        0);
    }

    return 0;
}

int calculaTempo(int anoAtual, int mesAtual, int anoRev, int mesRev)
{

    int meses = 0;
    if (anoRev <= anoAtual)
    {
        meses = anoAtual - anoRev;
        // anos
        meses *= 12;
        // meses restantes
        meses += (mesAtual - mesRev);
    }

    return meses;
}

int diffKM(int kmRev, int kmTotal)
{

    return kmTotal - kmRev;
}

void manutencaoTempo(int filtroCabine,
                     int fluidoFreio,
                     int limpezaAr,
                     int arrefecimento,
                     int fluidoTrans,
                     int pneus,
                     int mesesRev,
                     int kmMaior)
{

    // Tempo
    // 5 anos
    if (mesesRev >= 60)
    {
        printf("==> %s\n", filtroCabine);
        printf("==> %s\n", fluidoFreio);
        printf("==> %s\n", limpezaAr);
        printf("==> %s\n", arrefecimento);
        if (kmMaior != 1)
            printf("==> %s\n", fluidoTrans);
        printf("==> %s\n", pneus);
    }
    // 4 anos
    else if (mesesRev >= 48)
    {
        printf("==> %s\n", filtroCabine);
        printf("==> %s\n", fluidoFreio);
        printf("==> %s\n", limpezaAr);
        printf("==> %s\n", arrefecimento);
        if (kmMaior != 1)
            printf("==> %s\n", fluidoTrans);
    }
    // 2 anos
    else if (mesesRev >= 24)
    {
        printf("==> %s\n", filtroCabine);
        printf("==> %s\n", fluidoFreio);
        printf("==> %s\n", limpezaAr);
    }
    // 1 ano
    else if (mesesRev >= 12)
    {
        printf("==> %s\n", fluidoFreio);
        printf("==> %s\n", filtroCabine);
        printf("==> %s\n", limpezaAr);
    }
    // 6 meses
    else
    {
        printf("==> %s\n", fluidoFreio);
    }
}
