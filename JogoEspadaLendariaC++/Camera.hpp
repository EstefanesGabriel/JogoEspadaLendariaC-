#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

namespace EspadaLendaria {

    namespace Gerenciador {

        class Camera {
        private:
            sf::View camera;
            sf::IntRect limiteCamera;
            sf::IntRect limiteObjeto;
            sf::Vector2f tamJanela;

            void ajustarLimite();
        public:
            Camera(const sf::Vector2f tamJanela);
            ~Camera();
            void setLimiteCamera(const sf::IntRect limiteCamera);
            void setLimiteObjeto(const sf::IntRect objeto);
            sf::View getCamera();
            void resetar(const sf::Vector2f posCenter);
            void atualizar(const sf::Vector2f pos);
            void atualizar(const sf::Vector2f pos, sf::Vector2f tam);
        };

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.