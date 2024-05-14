#include "../personagens.hpp/Cavaleiro.hpp"

Cavaleiro::Cavaleiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Cavaleiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Cavaleiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Cavaleiro::pegarDescricao() 
{
    return "Sinta minha furia!";
}