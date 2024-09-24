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


// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.