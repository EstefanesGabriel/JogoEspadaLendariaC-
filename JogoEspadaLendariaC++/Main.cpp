#include "Principal.hpp"
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));

    EspadaLendaria::Principal objPrincipal;
    objPrincipal.executar();
    return 0;
}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.