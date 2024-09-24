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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.