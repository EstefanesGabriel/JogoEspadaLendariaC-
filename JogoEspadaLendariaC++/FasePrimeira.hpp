#pragma once

#include "Fase.hpp"
#include "Boss.hpp"

namespace EspadaLendaria {


    namespace Fase {

        class FasePrimeira : public Fase { //padrao template method e factory method
        private:
            int numMagos;
            int numEspinhos;
            void recuperarJogada(const std::vector<std::string> vectorEntidades, const std::vector<std::string> vectorInfoFase);
            void criarMapa1();

        public:
            FasePrimeira(const std::vector<std::string> vectorEntidades, const std::vector<std::string> vectorInfoFase, const IDs::IDs ID);
            FasePrimeira(const IDs::IDs ID );
            ~FasePrimeira();
            void setNumMagos(int m);
            int getNumMagos();
            void setNumEspinhos(int e);
            int getNumEspinhos();
            void criarEspinho(const sf::Vector2f pos, const sf::Vector2f tam);
            void criarFundo();
            void criarMapa(const IDs::IDs ID_Mapa);
        };

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.