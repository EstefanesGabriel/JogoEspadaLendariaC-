#pragma once

#include "MenuPrincipal.hpp"

#define CAMINHO_TEXTURA_MENU_PRINCIPAL "img/Menu/menuPrincipal.png"

namespace EspadaLendaria {

    namespace Menu {

        class Menuqntjogadores : public MenuPrincipal { //padrao de projeto template method
        public:
            Menuqntjogadores();
            ~Menuqntjogadores();
            void criarBotoes();
            void executar();
        };

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.