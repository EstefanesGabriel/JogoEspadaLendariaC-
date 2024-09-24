#pragma once

#include "Entidade.hpp"
#include "Jogador.hpp"
#include "Inimigo.hpp"

#include "Animacao.hpp"

namespace EspadaLendaria {

    namespace Entidade {

        namespace Obstaculo {
            //padrao d projeto template method
            class Obstaculo : public Entidade {
            protected:
                sf::Texture textura;

                virtual void InicializarAnimacao() = 0;
                const std::string salvarObstaculo();
            public:
                Obstaculo(const sf::Vector2f pos, const sf::Vector2f tam, const IDs::IDs ID);
                ~Obstaculo();
                virtual void Colisao(Entidade* outraEntidade, sf::Vector2f ds) = 0;
                virtual void atualizar();
                virtual void ColisaoObstaculo(sf::Vector2f ds, Personagem::Personagem* pPersonagem);
                virtual const std::string salvar();
            };

        }

    }
   

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.