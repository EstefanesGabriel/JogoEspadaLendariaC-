
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

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.
