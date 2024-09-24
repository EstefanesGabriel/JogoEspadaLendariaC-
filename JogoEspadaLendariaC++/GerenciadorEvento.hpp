#pragma once

#include "GerenciadorGrafico.hpp"
#include "Jogador.hpp"
#include "ListaObservador.hpp"

namespace EspadaLendaria {

    namespace Gerenciador {

        class GerenciadorEstado;

        class GerenciadorEvento {//padr�o de projeto singleton
        private:
            static GerenciadorGrafico* pGrafico;
            static GerenciadorEstado* pGEstado;
            static Lista::ListaObservador* listaObservador;

            
            static GerenciadorEvento* pEvento;
            GerenciadorEvento();
        public:
            ~GerenciadorEvento();
            static GerenciadorEvento* getGerenciadorEvento();
            void addObservador(Observador::Observador* observador);
            void removerObservador(Observador::Observador* observador);
            void removerObservador(int pos);
            void executar();
        };

    }

}
// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.