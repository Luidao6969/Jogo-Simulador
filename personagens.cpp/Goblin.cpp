#include "../personagens.hpp/Goblin.hpp"

Goblin::Goblin(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Goblin::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Goblin::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Goblin::pegarDescricao() 
{
    return "Rooooaaaaarrrr!";
}