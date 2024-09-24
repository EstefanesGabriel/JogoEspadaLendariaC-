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

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.