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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.