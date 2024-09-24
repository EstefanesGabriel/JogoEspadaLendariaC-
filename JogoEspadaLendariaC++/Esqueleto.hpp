#pragma once

#include "Inimigo.hpp"
#include <vector>

#define TAMANHO_ESQUELO_X 50.0f
#define TAMANHO_ESQUELO_Y 90.0f
#define ESQUELETO_TEMPO_MORTE 1.5f
#define ESQUELETO_PONTOS 200
#define ESQUELETO_EXPERIENCIA 50.0f

namespace EspadaLendaria {

    namespace Entidade {

        namespace Personagem {

            namespace Inimigo {

                class Esqueleto : public Inimigo {
                private:
                    bool raiva;
                    float tempoRaiva;
                    sf::Color corPadrao;

                    void InicializarAnimacao();
                    void InicializarNivel();
                    void AtualizarRaiva();
                    void AtualizarAnimacao();
                public:
                    Esqueleto(const sf::Vector2f pos, const int nivel, const std::vector<Jogador::Jogador*>& jogadores);
                    Esqueleto(const std::vector<std::string> atributos, const std::vector<Jogador::Jogador*>& jogadores);
                    ~Esqueleto();
                    void ReceberDano(const float dano);
                    const std::string salvar();
                    void AtualizarTempoAtaque();
                    void MoverInimigo();
                };

            }

        }

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.