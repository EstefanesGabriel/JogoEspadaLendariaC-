#pragma once

#include "MenuPausa.hpp"
#include "GerenciadorArquivo.hpp"
#include <map>

namespace EspadaLendaria {

    namespace Menu {

        class MenuSalvarJogada : public MenuPausa {
        private:
            Gerenciador::GerenciadorArquivo gerenciadorArquivo;
            std::list<FotoSalvar*> listaFotoSalvars;
            std::list<FotoSalvar*>::iterator itFotoSalvars;

            void inicializarFotoSalvars();
        public:
            MenuSalvarJogada(Fase::Fase* fase = nullptr);
            ~MenuSalvarJogada();
            void criarBotoes();
            void salvarJogada();
            void selecionaEsquerda();
            void selecionaDireita();
            void executar();
            std::string sanitizarLinha(const std::string& linha);
        };

    }


}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.