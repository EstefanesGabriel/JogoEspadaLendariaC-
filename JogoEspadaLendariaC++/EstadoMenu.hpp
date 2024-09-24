#pragma once

#include "Estado.hpp"

#include "Menu.hpp"
namespace EspadaLendaria {

    namespace Gerenciador {
        class GerenciadorEstado;
    }
    namespace Fase
    {
        class Fase;
    }
    namespace Estado {

        class EstadoMenu : public Estado {
        private:
            Menu::Menu* menu; //padrao de projeto state

            static Gerenciador::GerenciadorEstado* pGEstado; //padrao de projeto singleton
            void criarMenu();
        public:
            EstadoMenu(const IDs::IDs ID);
            ~EstadoMenu();
            void mudarEstadoObservador();
            EspadaLendaria::Fase::Fase* getFase();
            Menu::Menu* getMenu();
            void executar();
        };

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.