#pragma once

#include "Fase.hpp"

namespace EspadaLendaria {

    namespace Fase {

        class FaseSegunda : public Fase {//padrao template method e factory method
        private:
            int numBosses;
            void recuperarJogada(const std::vector<std::string> vectorEntidades, const std::vector<std::string> vectorInfoFase);
            void criarMapa();

        public:
            FaseSegunda(const std::vector<std::string> vectorEntidades, const std::vector<std::string> vectorInfoFase, const IDs::IDs ID);
            FaseSegunda(const IDs::IDs ID );
            ~FaseSegunda();
            void setNumBosses(int b);
            int getNumBosses();
            void criarFundo();
            void criarMapa(const IDs::IDs ID_Mapa);
        };

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.