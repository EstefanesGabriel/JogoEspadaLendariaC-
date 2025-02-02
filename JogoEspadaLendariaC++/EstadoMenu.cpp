#include "EstadoMenu.hpp"
#include "MenuPausa.hpp"
#include "MenuFase.hpp"
#include "MenuCarregarJogo.hpp"
#include "MenuColocacao.hpp"
#include "MenuGameOver.hpp"
#include "MenuPrincipal.hpp"
#include "MenuSalvarJogada.hpp"
#include "GerenciadorEstado.hpp"
#include "MenuQntjogadores.hpp"

namespace EspadaLendaria {

    namespace Estado {

        Gerenciador::GerenciadorEstado* EstadoMenu::pGEstado = Gerenciador::GerenciadorEstado::getGerenciadorEstado();

        EstadoMenu::EstadoMenu(const IDs::IDs ID) :
            Estado(ID), menu(nullptr)
        {
            criarMenu();
        }

        EstadoMenu::~EstadoMenu() {
            if (menu) {
                delete(menu);
                menu = nullptr;
            }
        }

        void EstadoMenu::mudarEstadoObservador() {
            menu->mudarEstadoObservador();
        }

        Fase::Fase* EstadoMenu::getFase() {
            if (
                ID == IDs::IDs::estado_menu_game_over ||
                ID == IDs::IDs::estado_menu_pausa ||
                ID == IDs::IDs::estado_menu_salvar_jogada
                ) {
                Menu::MenuPausa* menuFase = dynamic_cast<Menu::MenuPausa*>(menu);
                return menuFase->getFase();
            }
            return nullptr;
        }

        Menu::Menu* EstadoMenu::getMenu() {
            return menu;
        }

        void EstadoMenu::criarMenu() {
            Estado* estadoAtual = pGEstado->getEstadoAtual();
            Fase::Fase* fase = nullptr;
            if (estadoAtual != nullptr) {
                if (estadoAtual->getID() == IDs::IDs::jogar_FasePrimeira1 || estadoAtual->getID() == IDs::IDs::jogar_FaseSegunda1 ||
                    estadoAtual->getID() == IDs::IDs::jogar_FasePrimeira2 || estadoAtual->getID() == IDs::IDs::jogar_FaseSegunda2) {
                    EstadoJogar* estadoJogar = static_cast<EstadoJogar*>(estadoAtual);
                    fase = estadoJogar->getFase();
                }
                else if (estadoAtual->getID() == IDs::IDs::estado_menu_pausa) {
                    EstadoMenu* estadoMenu = static_cast<EstadoMenu*>(estadoAtual);
                    fase = estadoMenu->getFase();
                }
            }
            switch (ID)
            {
            case (IDs::IDs::estado_menu_principal):
            {
                Menu::MenuPrincipal* menuPrincipal = new Menu::MenuPrincipal();
                if (menuPrincipal == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu principal" << std::endl;
                    exit(1);
                }
                menuPrincipal->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuPrincipal);
            }
            break;
            case (IDs::IDs::estado_menu_pausa):
            {
                if (fase == nullptr) {
                    std::cout << "ERRO::EstadoMenuFase::nao foi possivel ter o ponteiro da fase" << std::endl;
                    exit(1);
                }
                Menu::MenuPausa* menuPausa = new Menu::MenuPausa(fase);
                if (menuPausa == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu pausa" << std::endl;
                    exit(1);
                }
                menuPausa->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuPausa);
            }
            break;
            case(IDs::IDs::estado_menu_qntjogadores):
            {
                Menu::Menuqntjogadores* menuqntjogadores = new Menu::Menuqntjogadores();
                if (menuqntjogadores == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu opcao principal" << std::endl;
                    exit(1);
                }
                menuqntjogadores->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuqntjogadores);
            }
            break;
            case(IDs::IDs::estado_menu_fases1):
            {
                Menu::MenuFase* menuFase = new Menu::MenuFase();
                if (menuFase == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu fase" << std::endl;
                    exit(1);
                }
                menuFase->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuFase);
            }
            break;
            case(IDs::IDs::estado_menu_fases2):
            {
                Menu::MenuFase* menuFase = new Menu::MenuFase();
                if (menuFase == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu fase" << std::endl;
                    exit(1);
                }
                menuFase->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuFase);
            }
            break;
            case (IDs::IDs::estado_menu_carregar_jogo):
            {
                Menu::MenuCarregarJogo* menuCarregarJogo = new Menu::MenuCarregarJogo();
                if (menuCarregarJogo == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu carregar jogo" << std::endl;
                    exit(1);
                }
                menuCarregarJogo->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuCarregarJogo);
            }
            break;
            case (IDs::IDs::estado_menu_colocacao):
            {
                Menu::MenuColocacao* menuColocacao = new Menu::MenuColocacao();
                if (menuColocacao == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu colocacao" << std::endl;
                    exit(1);
                }
                menuColocacao->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuColocacao);
            }
            break;
            case (IDs::IDs::estado_menu_salvar_jogada):
            {
                if (fase == nullptr) {
                    std::cout << "ERRO::EstadoMenuFase::nao foi possivel ter o ponteiro da fase" << std::endl;
                    exit(1);
                }
                Menu::MenuSalvarJogada* menuSalvarJogada = new Menu::MenuSalvarJogada(fase);
                if (menuSalvarJogada == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu salvar jogada" << std::endl;
                    exit(1);
                }
                menuSalvarJogada->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuSalvarJogada);
            }
            break;
            case (IDs::IDs::estado_menu_game_over):
            {
                if (fase == nullptr) {
                    std::cout << "ERRO::EstadoMenuFase::nao foi possivel ter o ponteiro da fase" << std::endl;
                    exit(1);
                }
                Menu::MenuGameOver* menuGameOver = new Menu::MenuGameOver(fase);
                if (menuGameOver == nullptr) {
                    std::cout << "EstadoMenu::nao foi possivel criar menu salvar jogada" << std::endl;
                    exit(1);
                }
                menuGameOver->criarBotoes();
                menu = static_cast<Menu::Menu*>(menuGameOver);
            }
            break;
            }
        }

        void EstadoMenu::executar() {
            menu->executar();
        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.