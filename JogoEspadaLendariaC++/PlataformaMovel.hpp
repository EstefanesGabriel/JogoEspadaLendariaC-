#pragma once

#include "Plataforma.hpp"

#define VELOCIDADE_PLATAFORMA 100.0f

namespace EspadaLendaria {

    namespace Entidade {

        namespace Obstaculo {

            class PlataformaMovel : public Plataforma {
            private:
                bool horizontal;
                float posFinal;
                float posInicial;
                bool paraEsquerda;
                bool paraBaixo;
                const sf::Vector2f velocidade;
                sf::Vector2f ds;

                void atualizarPosicao();
            public:
                PlataformaMovel(const sf::Vector2f pos, const float distancia, const sf::Vector2f tam, const bool horizontal);
                PlataformaMovel(const std::vector<std::string> atributos);
                ~PlataformaMovel();
                void Colisao(Entidade* outraEntidade, sf::Vector2f ds = sf::Vector2f(0.0f, 0.0f));
                const std::string salvar();
                void atualizar();
            };

        }

    }
   
}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.