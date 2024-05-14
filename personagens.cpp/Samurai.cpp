#include "../personagens.hpp/Samurai.hpp"

Samurai::Samurai(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Samurai::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Samurai::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Samurai::pegarDescricao() 
{
    return "Morra com honra!";
}