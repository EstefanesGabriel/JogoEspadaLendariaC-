#pragma once

#include "Ente.hpp"
#include "IDs.hpp"

#include "Camada.hpp"

namespace EspadaLendaria {

    namespace Parallax {

        class Fundo : public Ente {
        private:
            sf::Vector2f posAnteriorCamera;
            std::vector<Camada*> camadas;
        public:
            Fundo(const IDs::IDs ID);
            ~Fundo();
            void desenhar();
            void addCamada(const char* caminhoTextura, const float vel);
            void atualizarPosicao();
            void executar();
        };

    }

}


// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.