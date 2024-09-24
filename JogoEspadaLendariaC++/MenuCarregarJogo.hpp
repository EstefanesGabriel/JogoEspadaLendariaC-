#pragma once

#include "MenuPrincipal.hpp"
#include "GerenciadorArquivo.hpp"

namespace EspadaLendaria {

    namespace Menu {

        class MenuCarregarJogo : public MenuPrincipal { //padrao de projeto template method e factory method
        private:
            Gerenciador::GerenciadorArquivo gerenciadorArquivo;
            std::list<FotoSalvar*> listaFotoSalvars;
            std::list<FotoSalvar*>::iterator itFotoSalvars;

            void inicializarFotoSalvars();
        public:
            MenuCarregarJogo();
            ~MenuCarregarJogo();
            void selecionaEsquerda();
            void selecionaDireita();
            void deletarArquivos();
            FotoSalvar* getFotoSalvarSelecionado() const;
            void criarBotoes();
            void executar();
        };

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.