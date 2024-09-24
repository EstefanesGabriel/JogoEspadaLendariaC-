#pragma once

#include "Arma.hpp"
#include "Animacao.hpp"

#define TAMANHO_PROJETIL 25.0f

namespace EspadaLendaria {

    namespace Entidade {

        namespace Item {

            class Projetil : public Arma {
            private:
                bool paraEsquerda;
                sf::Vector2f velocidade;
                Animador::Animacao animacao;
                bool colidiu;

                void AtualizarAnimacao();
                void atualizarPosicao();
                void verificaSaiuTela();
            public:
                Projetil(Personagem::Personagem* personagem = nullptr);
                Projetil(const std::vector<std::string> atributos, Personagem::Personagem* personagem = nullptr);
                ~Projetil();
                void InicializarAnimacao();
                void setSentido(const bool paraEsquerda);
                void setVelocidade(const sf::Vector2f velocidade);
                void setColidiu(const bool colidiu);
                const bool getColidiu() const;
                const std::string salvar();
                void desenhar();
                void atualizar();
            };

        }

    }

}
//Cr�ditos ao Brullov Studios pela sprite do Boss
//Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
//que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.