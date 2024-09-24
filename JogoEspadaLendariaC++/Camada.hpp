#pragma once

#include <SFML/Graphics.hpp>

namespace EspadaLendaria {

    namespace Parallax {

        class Camada {
        private:
            const sf::Vector2f tamJanela;
            sf::IntRect dimensao;
            const float vel;

            sf::Texture textura;
            sf::RectangleShape fundo;
            sf::RectangleShape fundoAuxiliar;

            void trocarTextura();
        public:
            Camada(const sf::Vector2f tamJanela, sf::Texture textura, const float vel);
            ~Camada();
            void desenharCamada(sf::RenderWindow* window);
            void atualizar(const sf::Vector2f ds, const sf::Vector2f posCameraAtual);
        };

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.