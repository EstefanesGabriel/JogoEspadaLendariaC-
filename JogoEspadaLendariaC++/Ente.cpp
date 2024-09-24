
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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.