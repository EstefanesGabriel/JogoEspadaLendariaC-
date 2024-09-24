#pragma once

#include "Obstaculo.hpp"

#define ESPINHO_DANO 40.0f
#define TEXTURA_ESPINHO_LOCAL "img/Obstaculo/spikes.png"

namespace EspadaLendaria {

    namespace Entidade {

        namespace Obstaculo {

            class Espinho : public Obstaculo {
            private:
                float dano;

                void InicializarAnimacao();
            public:
                Espinho(const sf::Vector2f pos, const sf::Vector2f tam);
                Espinho(const std::vector<std::string> atributos);
                ~Espinho();
                void setDano(const float dano);
                const float getDano() const;
                void Colisao(Entidade* outraEntidade, sf::Vector2f ds = sf::Vector2f(0.0f, 0.0f));
                const std::string salvar();
            };

        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.