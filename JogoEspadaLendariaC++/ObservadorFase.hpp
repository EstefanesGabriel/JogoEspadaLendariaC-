#pragma once

#include "Observador.hpp"
#include "Menu.hpp"

namespace EspadaLendaria {

    namespace Fase {
        class Fase;
    }

    namespace Observador {
        //padrao de projeto observer e mediator
        class ObservadorFase : public Observador {
        private:
            Fase::Fase* fase;
        public:
            ObservadorFase();
            ~ObservadorFase();
            void setFase(Fase::Fase* fase);
            void teclaPressionada(const sf::Keyboard::Key tecla);
            void teclaSolta(const sf::Keyboard::Key tecla);
            void notificarJogadorMorreu();
        };

    }
}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.