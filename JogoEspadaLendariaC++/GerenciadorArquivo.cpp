#include "GerenciadorArquivo.hpp"

namespace EspadaLendaria {

    namespace Gerenciador {

        GerenciadorArquivo::GerenciadorArquivo() :
            arquivoGravar(), arquivoLeitura()
        {

        }

        GerenciadorArquivo::~GerenciadorArquivo() {
            if (arquivoLeitura.is_open()) {
                arquivoLeitura.close();
            }
            if (arquivoGravar.is_open()) {
                arquivoGravar.close();
            }
        }

        void GerenciadorArquivo::abrirArquivoLeitura(const char* caminhoArquivo) {
            arquivoLeitura.open(caminhoArquivo);
            if (!arquivoLeitura.is_open()) {
                std::cout << "ERRO::GerenciadorArquivo::nao foi possivel abrir o arquivo " << caminhoArquivo << std::endl;
                exit(1);
            }
        }

        void GerenciadorArquivo::fecharArquivoLeitura() {
            arquivoLeitura.close();
        }

        void GerenciadorArquivo::abrirArquivoGravar(const char* caminhoArquivo) {
            arquivoGravar.open(caminhoArquivo, std::ios::app);
            if (!arquivoGravar.is_open()) {
                std::cout << "ERRO::GerenciadorArquivo::nao foi possivel abrir o arquivo " << caminhoArquivo << std::endl;
                exit(1);
            }
        }

        void GerenciadorArquivo::fecharArquivoGravar() {
            arquivoGravar.close();
        }

        std::vector<std::string> GerenciadorArquivo::lerArquivo(const char* caminhoArquivo) {
            abrirArquivoLeitura(caminhoArquivo);
            std::vector<std::string> linhas;
            //std::cout << (int)linhas.size() << std::endl;
            std::string linha = "";
            while (std::getline(arquivoLeitura, linha)) {
                linhas.push_back(linha);
            }
            fecharArquivoLeitura();
            return linhas;
        }

        void GerenciadorArquivo::gravarConteudo(const char* caminhoArquivo, std::vector<std::string> linhas) {
            abrirArquivoGravar(caminhoArquivo);
            std::string linha = "";
            for (int i = 0; i < linhas.size(); i++) {
                arquivoGravar << linhas[i] << " " << std::endl;
            }
            fecharArquivoGravar();
        }

        void GerenciadorArquivo::gravarConteudo(const char* caminhoArquivo, const std::string linha) {
            abrirArquivoGravar(caminhoArquivo);
            const char quebraLinha = 10;
            arquivoGravar << linha << " " << quebraLinha;
            fecharArquivoGravar();
        }

        void GerenciadorArquivo::removeArquivo(const char* caminhoArquivo) {
            remove(caminhoArquivo);
        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.