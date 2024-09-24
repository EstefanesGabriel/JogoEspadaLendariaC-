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
//Créditos ao Brullov Studios pela sprite do Boss
//Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
//que serviram de inspiração para a implementação do Jogo Espada Lendaria.