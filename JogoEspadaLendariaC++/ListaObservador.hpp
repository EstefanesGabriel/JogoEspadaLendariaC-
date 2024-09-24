#pragma once

#include "Lista.hpp"
#include "Observador.hpp"
#include "SFML/Graphics.hpp"

namespace EspadaLendaria {

    namespace Lista {

        class ListaObservador { //padrao de projeto facade
        private:
            Lista<Observador::Observador> objListaObservador;
        public:
            ListaObservador();
            ~ListaObservador();
            void addObservador(Observador::Observador* observador);
            void removerObservador(Observador::Observador* observador);
            void removerObservador(int pos);
            int getTam();
            Observador::Observador* operator[](int pos);
            void notificarTeclaPressionada(const sf::Keyboard::Key tecla);
            void notificarTeclaSolta(const sf::Keyboard::Key tecla);
            void notificarMovimentoMouse(const sf::Event::MouseMoveEvent mouse);
            void notificarBotaoMouseSolta(const sf::Mouse::Button botaoMouse);
        };

    }

}


// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.