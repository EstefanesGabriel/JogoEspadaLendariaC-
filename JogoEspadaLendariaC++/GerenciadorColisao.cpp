
#include "GerenciadorColisao.hpp"

namespace EspadaLendaria {

    namespace Gerenciador {

        GerenciadorColisao::GerenciadorColisao(Lista::ListaEntidade* listaPersonagem, Lista::ListaEntidade* listaObstaculo) :
            listaPersonagem(listaPersonagem), listaObstaculo(listaObstaculo)
        {

        }

        GerenciadorColisao::~GerenciadorColisao() {
            
        }

        const sf::Vector2f GerenciadorColisao::calculaColisao(Entidade::Entidade* ent1, Entidade::Entidade* ent2) {
            sf::Vector2f pos1 = ent1->getPos();
            sf::Vector2f pos2 = ent2->getPos();

            sf::Vector2f tam1 = ent1->getTam();
            sf::Vector2f tam2 = ent2->getTam();

            sf::Vector2f distanciaEntreCentros(
                fabs((pos1.x + tam1.x / 2.0f) - (pos2.x + tam2.x / 2.0f)),
                fabs((pos1.y + tam1.y / 2.0f) - (pos2.y + tam2.y / 2.0f))
            );
            sf::Vector2f somaMetadeRectangulo(tam1.x / 2.0f + tam2.x / 2.0f, tam1.y / 2.0f + tam2.y / 2.0f);
            return sf::Vector2f(distanciaEntreCentros.x - somaMetadeRectangulo.x, distanciaEntreCentros.y - somaMetadeRectangulo.y);
        }

        void GerenciadorColisao::executar() {
            for (int i = 0; i < listaPersonagem->getTam() - 1; i++) {
                Entidade::Entidade* ent1 = listaPersonagem->operator[](i);
                for (int j = i + 1; j < listaPersonagem->getTam(); j++) {
                    Entidade::Entidade* ent2 = listaPersonagem->operator[](j);
                    sf::Vector2f ds = calculaColisao(ent1, ent2);
                    if (ds.x < 0.0f && ds.y < 0.0f) {
                        ent1->Colisao(ent2, ds);
                    }
                }
            }

            for (int i = 0; i < listaPersonagem->getTam(); i++) {
                Entidade::Entidade* ent1 = listaPersonagem->operator[](i);
                for (int j = 0; j < listaObstaculo->getTam(); j++) {
                    Entidade::Entidade* ent2 = listaObstaculo->operator[](j);
                    sf::Vector2f ds = calculaColisao(ent1, ent2);
                    if (ds.x < 0.0f && ds.y < 0.0f) {
                        ent2->Colisao(ent1, ds);
                    }
                }
            }

           
        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.