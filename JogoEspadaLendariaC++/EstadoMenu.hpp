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

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.