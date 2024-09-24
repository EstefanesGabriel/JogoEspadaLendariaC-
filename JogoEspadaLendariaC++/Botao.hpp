#pragma once 

#include "Ente.hpp"

namespace EspadaLendaria {

    namespace Menu {

        namespace Botao {

            class Botao : public Ente {
            private:
                const sf::Vector2f tamMax;
                const sf::Vector2f tamInicial;
                bool aumentando;

            protected:
                sf::RectangleShape caixa;
                sf::Texture* textura;
                sf::Vector2f pos;
                sf::Vector2f tam;

                const float tempoTroca;
                float tempo;
            public:
                Botao(const sf::Vector2f tam, const sf::Vector2f pos, const IDs::IDs ID, const float tempoTroca = 0.0f, const sf::Vector2f tamMax = sf::Vector2f(0.0f, 0.0f));
                virtual ~Botao();
                virtual void desenhar();
                virtual void AtualizarAnimacao();
                virtual void atualizarPosicaoCaixa(const sf::Vector2f pos);
                void setTextura(sf::Texture* textura);
                const sf::Vector2f getPos() const;
            };

        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.