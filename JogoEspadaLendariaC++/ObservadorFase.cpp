#include "ObservadorFase.hpp"
#include "GerenciadorEstado.hpp"
#include "Fase.hpp"

namespace EspadaLendaria {

    namespace Observador {

        ObservadorFase::ObservadorFase() :
            Observador(), fase(nullptr)
        {

        }

        ObservadorFase::~ObservadorFase() {
            fase = nullptr;
        }

        void ObservadorFase::setFase(Fase::Fase* fase) {
            this->fase = fase;
        }

        void ObservadorFase::notificarJogadorMorreu() {
            pGEstado->addEstado(IDs::IDs::estado_menu_game_over);
        }

        void ObservadorFase::teclaPressionada(const sf::Keyboard::Key tecla) {
            Estado::Estado* estadoAtual = pGEstado->getEstadoAtual();
            if (estadoAtual && estadoAtual->getID() != IDs::IDs::estado_menu_pausa) {
                if (tecla == sf::Keyboard::Escape || tecla == sf::Keyboard::P) {
                    pGEstado->addEstado(IDs::IDs::estado_menu_pausa);
                }
            }
        }

        void ObservadorFase::teclaSolta(const sf::Keyboard::Key tecla) {
            Estado::Estado* estadoAtual = pGEstado->getEstadoAtual();
            if (estadoAtual && estadoAtual->getID() != IDs::IDs::estado_menu_pausa) {
                if (tecla == sf::Keyboard::Escape || tecla == sf::Keyboard::P) {
                    pGEstado->addEstado(IDs::IDs::estado_menu_pausa);
                }
            }
        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.