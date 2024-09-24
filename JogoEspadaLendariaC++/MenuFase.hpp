#pragma once
#include "MenuPrincipal.hpp"

namespace EspadaLendaria {
	
	namespace Menu {

		class MenuFase : public MenuPrincipal { //padrao de projeto template method e factory method
		private:
			
		public:
			MenuFase();
			~MenuFase();
			void criarBotoes();
			void executar();
		};
	}
}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.