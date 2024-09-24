#pragma once

#include "Jogador.hpp"

namespace EspadaLendaria {
    namespace Entidade {
        namespace Personagem {
            namespace Jogador {

                class Jogador1 : public Jogador {
                private:
                    bool emFuria;
                    float tempoFuria;
                    float duracaoFuria;
                    float cooldownFuria;
                    sf::Color corPadrao;

                public:
                    Jogador1(const sf::Vector2f pos, Item::Arma* arma);
                    Jogador1(const std::vector<std::string> atributos);
                    ~Jogador1();
                    void InicializarAnimacao();
                    void ativarFuria();
                    bool podeUsarFuria() const;
                    void atualizar();
                    void AtualizarAnimacao();
                    void atualizarBarraVida();
                    void atualizarBarraXP();
                    void atualizarExp();
                    void AtualizarNivel();
                };

            }
        }
    }
}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.