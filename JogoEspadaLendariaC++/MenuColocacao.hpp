#pragma once

#include "MenuPrincipal.hpp"
#include "GerenciadorArquivo.hpp"
#include <vector> 

#define CAMINHO_ARQUIVO_COLOCACAO "arquivo/Colocacao/colocacao.txt"
#define QUANTIDADE_PALAVRAS 2
#define CAMINHO_FONTE_COLOCACAO "fonte/Ancient Medium.ttf" //cr�ditos da fonte a artRAVE Editions do site: https://www.dafont.com/pt/search.php?q=ancient

namespace EspadaLendaria {

    namespace Menu {

        class MenuColocacao : public MenuPrincipal {//padrao de projeto template method e factory method
        private:
            std::vector<Botao::Texto*> vectorTexto;
            Gerenciador::GerenciadorArquivo gerenciadorArquivo;

            void criarTexto(std::string linha);
            void criarColocacao();
            void desenharColocacao();
        public:
            MenuColocacao();
            ~MenuColocacao();
            void criarBotoes();
            void executar();
        };

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.