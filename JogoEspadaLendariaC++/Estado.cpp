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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.