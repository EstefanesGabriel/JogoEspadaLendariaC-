#pragma once

#include "Menu.hpp"
#include "Texto.hpp"

#define CAMINHO_FONTE_CARD "fonte/Ancient Medium.ttf" //cr�ditos da fonte a artRAVE Editions do site: https://www.dafont.com/pt/search.php?q=ancient

namespace EspadaLendaria {

    namespace Menu {

        class FotoSalvar {
        private:
            sf::Texture* textura;
            sf::RectangleShape* Corpo;
            Botao::Texto textoInfo;
            const std::string caminhoArquivoEntidades;
            const std::string caminhoArquivoFase;
            const std::string caminhoImage;
            sf::Color cor;
            bool selecionado;
            bool existe;

            static Gerenciador::GerenciadorGrafico* pGrafico;
        public:
            FotoSalvar(const sf::Vector2f pos, const std::string caminhoArquivoEntidades, const std::string caminhoArquivoFase, const std::string caminhoImage);
            ~FotoSalvar();
            const std::string getCaminhoArquivoEntidades() const;
            const std::string getCaminhoArquivoFase() const;
            const std::string getCaminhoImage() const;
            void setColor(const sf::Color cor);
            void setSelecionado(const bool selecionado);
            const bool getSelecionado() const;
            const bool getExiste() const;
            void deletarTextura();
            void desenhar();
        };

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.