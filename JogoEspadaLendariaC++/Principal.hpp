
#pragma once

//Gerenciador
#include "GerenciadorGrafico.hpp"
#include "GerenciadorEvento.hpp"

//Fases
#include "FasePrimeira.hpp"
#include "FaseSegunda.hpp"

#include "GerenciadorEstado.hpp"


namespace EspadaLendaria {
    //padrao facade e singleton
    class Principal {
        private:
            static Gerenciador::GerenciadorGrafico* pGrafico;
            static Gerenciador::GerenciadorEvento* pEvento;
            static Gerenciador::GerenciadorEstado* pGerenciadorEstado;

            void inicializa();
        public:
            Principal();
            ~Principal();
            void executar();
    };
   
}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.
