#include "../personagens.hpp/Orc.hpp"

Orc::Orc(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Orc::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Orc::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Orc::pegarDescricao() 
{
    return "Rooooaaaaarrrr!";
}