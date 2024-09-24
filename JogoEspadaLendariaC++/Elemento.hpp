#pragma once

#include <iostream>

namespace EspadaLendaria {

    namespace Lista {
        //padrao de projeto iterator
        template<class TIPO>
        class Elemento {
        private:
            Elemento<TIPO>* prox;
            TIPO* elemento;
        public:
            Elemento();
            ~Elemento();
            void setProx(Elemento<TIPO>* prox);
            void setElemento(TIPO* elemento);
            Elemento<TIPO>* getProx();
            TIPO* getElemento();
        };

        template<class TIPO>
        Elemento<TIPO>::Elemento() :
            prox(nullptr), elemento(nullptr)
        {

        }
        template<class TIPO>
        Elemento<TIPO>::~Elemento() {

        }

        template<class TIPO>
        void Elemento<TIPO>::setProx(Elemento<TIPO>* prox) {
            this->prox = prox;
        }

        template<class TIPO>
        void Elemento<TIPO>::setElemento(TIPO* elemento) {
            this->elemento = elemento;
        }

        template<class TIPO>
        Elemento<TIPO>* Elemento<TIPO>::getProx() {
            return prox;
        }

        template<class TIPO>
        TIPO* Elemento<TIPO>::getElemento() {
            return elemento;
        }

    }

}

// Créditos aos códigos de Gerenciadores, Observadores, Estados e de Animação do Monitor Giovane Limas Salvi
// que serviram de inspiração para a implementação do Jogo Espada Lendaria.