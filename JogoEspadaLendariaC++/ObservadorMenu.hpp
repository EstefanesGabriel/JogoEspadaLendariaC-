#pragma once

#include "Observador.hpp"
#include "Menu.hpp"
#include "Botao.hpp"
#include "MenuGameOver.hpp"
#include "MenuSalvarJogada.hpp"
#include "MenuCarregarJogo.hpp"
#include "MenuFase.hpp"

namespace EspadaLendaria {

    namespace Observador {
        //padrao de objeto observer
        class ObservadorMenu : public Observador {
        private:
            Menu::Menu* menu;
        public:
            ObservadorMenu(Menu::Menu* menu);
            ~ObservadorMenu();
            void teclaPressionada(const sf::Keyboard::Key tecla);
            void teclaSolta(const sf::Keyboard::Key tecla);
            void moveMouse(const sf::Vector2f posMouse);
            void botaoMouseSolta(const sf::Mouse::Button botaoMouse);
        };

    }
    
}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.