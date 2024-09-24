#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "IDs.hpp"
#include "GerenciadorGrafico.hpp"

namespace EspadaLendaria {

    class Ente {
    protected:
        //padrao de projeto Singleton
        static Gerenciador::GerenciadorGrafico* pGrafico;
        const IDs::IDs ID;
        const std::string salvarEnte();
    public:
        Ente(const IDs::IDs ID);
        ~Ente();
        const IDs::IDs getID() const;
        virtual void desenhar() = 0;
    };

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.