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

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.