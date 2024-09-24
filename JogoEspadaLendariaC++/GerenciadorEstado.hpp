
#pragma once

//Gerenciadores
#include "GerenciadorGrafico.hpp"


#include "EstadoJogar.hpp"
#include "EstadoMenu.hpp"
//#include "../Estado/EstadoMenuPrincipal.hpp"
//#include "../Estado/EstadoMenuFase.hpp"

//Pilha
#include <stack>

namespace EspadaLendaria {

    namespace Gerenciador {

        class GerenciadorEstado {
        private:
            std::stack<Estado::Estado*> pilhaEstados;

            //padr�o de projeto singleton e state
            static GerenciadorEstado* pGerenciadorEstado;
            GerenciadorEstado();

            void desativarObservadores();
            void ativarObservadores();
        public:
            ~GerenciadorEstado();
            static GerenciadorEstado* getGerenciadorEstado();
            void executar();
            Estado::Estado* getEstado(const int qtdRemove);
            void addEstado(const IDs::IDs ID);
            void removerEstado(const int qtd);
            void removerEstado();
            Estado::Estado* getEstadoAtual();
        };

    }

}
// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.
