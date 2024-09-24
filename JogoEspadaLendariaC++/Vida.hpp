#pragma once

#include "Animacao.hpp"
#include "Jogador.hpp"

#define TAMANHO_VIDA 50.0f
#define CAMINHO_VIDA "img/Item/vida.png"
#define VIDA_MAXIMA 80
#define VIDA_MINIMA 20

namespace EspadaLendaria {

    namespace Entidade {

        namespace Item {

            class Vida : public Entidade {
            private:
                float vida;
                Animador::Animacao animacao;

                void InicializarAnimacao();
                void AtualizarAnimacao();
            public:
                Vida(const sf::Vector2f pos);
                Vida(const std::vector<std::string> atributos);
                ~Vida();
                const float getVida() const;
                void Colisao(Entidade* outraEntidade, sf::Vector2f ds = sf::Vector2f(0.0f, 0.0f));
                const std::string salvar();
                void atualizar();
            };

        }

    }
   
}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.