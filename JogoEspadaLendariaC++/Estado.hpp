#pragma once

#include "Ente.hpp"

namespace EspadaLendaria {

    namespace Estado {

        class Estado : public Ente {
        private:
            bool remover; //padrao de projeto state
        public:
            Estado(const IDs::IDs ID);
            virtual ~Estado();
            virtual void executar() = 0;
            virtual void desenhar();
            void setRemover(const bool remover = true);
            const bool getRemover() const;
            virtual void mudarEstadoObservador() = 0;
        };

    }

}
// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.