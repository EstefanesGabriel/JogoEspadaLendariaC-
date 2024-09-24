#include "Entidade.hpp"

namespace EspadaLendaria {

    namespace Entidade {

        Entidade::Entidade(const sf::Vector2f tam, const IDs::IDs ID, const sf::Vector2f pos) :
            Ente(ID), Corpo(sf::RectangleShape(tam)), pos(pos), tam(tam), podeRemover(false)
        {
            Corpo.setPosition(pos);
        }

        Entidade::~Entidade() {

        }

        const std::string Entidade::salvarEntidade() {
            std::string linha = salvarEnte();
            linha += std::to_string(pos.x) + ' ';
            linha += std::to_string(pos.y) + ' ';
            linha += std::to_string(tam.x) + ' ';
            linha += std::to_string(tam.y) + ' ';
            return linha;
        }

        const sf::RectangleShape Entidade::getCorpo() const {
            return Corpo;
        }

        void Entidade::setPos(const sf::Vector2f pos) {
            Corpo.setPosition(pos);
            this->pos = pos;
        }

        void Entidade::setTam(const sf::Vector2f tam) {
            Corpo.setSize(tam);
            this->tam = tam;
        }

        const sf::Vector2f Entidade::getPos() const {
            return pos;
        }

        const sf::Vector2f Entidade::getTam() const {
            return tam;
        }

        const bool Entidade::getRemover() const {
            return podeRemover;
        }

        void Entidade::remover() {
            podeRemover = true;
        }

        void Entidade::desenhar() {
            pGrafico->desenhaElemento(Corpo);
        }

    }

}

// Cr�ditos aos c�digos de Gerenciadores, Observadores, Estados e de Anima��o do Monitor Giovane Limas Salvi
// que serviram de inspira��o para a implementa��o do Jogo Espada Lendaria.