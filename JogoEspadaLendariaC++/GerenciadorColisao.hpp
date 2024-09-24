
#pragma once 

#include <SFML/Graphics.hpp>
#include "ListaEntidade.hpp"
#include <cmath>

namespace EspadaLendaria {

    namespace Gerenciador {

        class GerenciadorColisao {
        private:
            Lista::ListaEntidade* listaPersonagem;
            Lista::ListaEntidade* listaObstaculo;
        public:
            GerenciadorColisao(Lista::ListaEntidade* listaPersonagem, Lista::ListaEntidade* listaObstaculo);
            ~GerenciadorColisao();
            const sf::Vector2f calculaColisao(EspadaLendaria::Entidade::Entidade* ent1, EspadaLendaria::Entidade::Entidade* ent2); //coloquei o EspadaLendaria
            void executar();
        };

    }

}


// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.
