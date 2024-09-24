#pragma once

#include "MenuPrincipal.hpp"
#include "GerenciadorArquivo.hpp"
#include <vector> 

#define CAMINHO_ARQUIVO_COLOCACAO "arquivo/Colocacao/colocacao.txt"
#define QUANTIDADE_PALAVRAS 2
#define CAMINHO_FONTE_COLOCACAO "fonte/Ancient Medium.ttf" //créditos da fonte a artRAVE Editions do site: https://www.dafont.com/pt/search.php?q=ancient

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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.