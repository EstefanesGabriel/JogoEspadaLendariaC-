
#pragma once 

#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <vector>

namespace EspadaLendaria {

    namespace Gerenciador {

        class GerenciadorArquivo { //padrao de projeto facade
        private:
            std::ifstream arquivoLeitura;
            std::ofstream arquivoGravar;

            void abrirArquivoLeitura(const char* caminhoArquivo);
            void fecharArquivoLeitura();
            void abrirArquivoGravar(const char* caminhoArquivo);
            void fecharArquivoGravar();
        public:
            GerenciadorArquivo();
            ~GerenciadorArquivo();
            std::vector<std::string> lerArquivo(const char* caminhoArquivo);
            void gravarConteudo(const char* caminhoArquivo, std::vector<std::string> linhas);
            void gravarConteudo(const char* caminhoArquivo, const std::string linha);
            void removeArquivo(const char* caminhoArquivo);
        };

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.