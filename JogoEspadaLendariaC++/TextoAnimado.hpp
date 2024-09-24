#pragma once

#include "Texto.hpp"

namespace EspadaLendaria {

    namespace Menu {

        namespace Botao {

            class TextoAnimado : public Texto {
            private:
                int transparente;
                bool clareando;
                void atualizar();
            public:
                TextoAnimado(const sf::Font fonte, const std::string info);
                ~TextoAnimado();
                void mudarClareando();
                const bool getClareando() const;
                const int  getTransparente() const;
                void setTransparente(int transparente);
                void resetar();
            };

        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.