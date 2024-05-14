#include "../core-simulator.hpp/ArmaAtaque.hpp"
#include "../acessorios.hpp/Adaga.hpp"

Adaga::Adaga(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Adaga::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Adaga::gerarRuidoAtaque()
{
    return "plin flush";
}