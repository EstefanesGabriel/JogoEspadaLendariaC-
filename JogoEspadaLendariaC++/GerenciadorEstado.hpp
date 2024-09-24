
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

            //padrão de projeto singleton e state
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
// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.
