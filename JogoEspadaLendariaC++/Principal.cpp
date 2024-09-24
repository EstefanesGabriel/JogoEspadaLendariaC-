
#include "Principal.hpp"

namespace EspadaLendaria {

    Gerenciador::GerenciadorGrafico* Principal::pGrafico = Gerenciador::GerenciadorGrafico::getGerenciadorGrafico();
    Gerenciador::GerenciadorEstado* Principal::pGerenciadorEstado = Gerenciador::GerenciadorEstado::getGerenciadorEstado();
    Gerenciador::GerenciadorEvento* Principal::pEvento = Gerenciador::GerenciadorEvento::getGerenciadorEvento();

    Principal::Principal() {
        if (pGrafico == nullptr) {
            std::cout << "ERROR::EspadaLendaria::Principal nao foi possivel criar o GerenciadorGrafico" << std::endl;
            exit(1);
        }
        if (pEvento == nullptr) {
            std::cout << "ERROR::EspadaLendaria::Principal nao foi possivel criar um GerenciadorEvento" << std::endl;
            exit(1);
        }
        if (pGerenciadorEstado == nullptr) {
            std::cout << "ERROR::EspadaLendaria::Principal::nao foi possivel criar um GerenciadorEstado" << std::endl;
            exit(1);
        }
        inicializa();
    }

    Principal::~Principal() {

    }

    void Principal::inicializa() {
        pGerenciadorEstado->addEstado(IDs::IDs::estado_menu_principal);
    }

    void Principal::executar() {

        while (pGrafico->verificaJanelaAberta()) {
            //gerencia eventos
            pEvento->executar();

            //limpa janela
            pGrafico->limpaJanela();

            //atualiza maquina de estado
            pGerenciadorEstado->executar();

            //mostra tudo na janela
            pGrafico->mostraElementos();

            //reseta o relogio
            pGrafico->resetarRelogio();
        }
    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.