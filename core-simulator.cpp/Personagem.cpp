#include "../core-simulator.hpp/Personagem.hpp"
#include "../core-simulator.hpp/ArmaAtaque.hpp"
#include "../core-simulator.hpp/ArmaDefesa.hpp"
Personagem::Personagem(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:id(id), nome(nome), vida(vida), armaAtaque(armaAtaque), armaDefesa(armaDefesa){

}

int Personagem::getId()
{
    return this->id;
}

string Personagem::getNome()
{
    return this->nome;
}


int Personagem::getVida()
{
    return this->vida;
}

void Personagem::setVida(int vida)
{
    this->vida = vida;
}

ArmaAtaque* Personagem::getArmaAtaque()
{
    return armaAtaque;
}