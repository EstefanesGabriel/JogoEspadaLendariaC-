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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.