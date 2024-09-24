#pragma once

#include "Jogador.hpp"

namespace EspadaLendaria {

    namespace Entidade {

        namespace Personagem {

            namespace Jogador {

                class Jogador2 : public Jogador {
                private:
                    bool emEsquiva;
                    float tempoEsquiva;
                    const float duracaoEsquiva = 1.0f;
                    float cooldownEsquiva;// Duração da esquiva em segundos
                public:
                    Jogador2(const sf::Vector2f pos, Item::Arma* arma);
                    Jogador2(const std::vector<std::string> atributos);
                    ~Jogador2();
                    void InicializarAnimacao();
                    void AtualizarAnimacao();
                    void ativarEsquiva();
                    void atualizar() override;
                    bool getEsquiva();
                    bool podeUsarEsquiva() const;
                    void atualizarBarraVida();
                    void atualizarBarraXP();
                    void atualizarExp();
                    void AtualizarNivel();
                };


            }

        }

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.