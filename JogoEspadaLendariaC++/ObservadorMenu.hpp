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

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.