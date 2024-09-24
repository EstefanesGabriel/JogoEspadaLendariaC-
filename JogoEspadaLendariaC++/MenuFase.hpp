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

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.