
#include "Ente.hpp"

namespace EspadaLendaria {
    //padrao de projeto singleton
    Gerenciador::GerenciadorGrafico* Ente::pGrafico = Gerenciador::GerenciadorGrafico::getGerenciadorGrafico();

    Ente::Ente(const IDs::IDs ID) :
        ID(ID)
    {

    }

    Ente::~Ente() {

    }

    const std::string Ente::salvarEnte() {
        return std::to_string(static_cast<int>(ID)) + ' ';
    }

    const IDs::IDs Ente::getID() const {
        return ID;
    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.