
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

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.