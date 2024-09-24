#include "Estado.hpp"

namespace EspadaLendaria {

    namespace Estado {

        Estado::Estado(const IDs::IDs ID) :
            Ente(ID), remover(false)
        {

        }

        Estado::~Estado() {

        }

        void Estado::desenhar() {

        }

        void Estado::setRemover(const bool remover) {
            this->remover = remover;
        }

        const bool Estado::getRemover() const {
            return remover;
        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.