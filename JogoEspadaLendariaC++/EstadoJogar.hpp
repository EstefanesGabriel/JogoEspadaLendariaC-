#pragma once

#include "Estado.hpp"

//Gerenciador
#include "GerenciadorGrafico.hpp"
#include "GerenciadorArquivo.hpp"

//Fases


#include <map>

namespace EspadaLendaria {
    namespace Fase {
        class Fase;
    }
    namespace Estado {

        class EstadoJogar : public Estado {
        private:
            std::map<IDs::IDs, Fase::Fase*> mapFase;
            IDs::IDs ID_FaseAtual;

        public:
            EstadoJogar(const IDs::IDs ID);
            ~EstadoJogar();
            void criarFase(const std::string arquivoEntidades, std::vector<std::string> vectorInfoFase);
            void criarFase();
            std::map<IDs::IDs, Fase::Fase*> getMapFase();
            const IDs::IDs getIDFaseAtual() const;
            Fase::Fase* getFase();
            void mudarEstadoObservador(); //padrao de projeto state
            void executar();
        };

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.