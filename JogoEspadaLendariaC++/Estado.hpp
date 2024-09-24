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
// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.