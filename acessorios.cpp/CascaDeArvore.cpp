#include "../core-simulator.hpp/ArmaDefesa.hpp"
#include "../acessorios.hpp/CascaDeArvore.hpp"

CascaDeArvore::CascaDeArvore(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string CascaDeArvore::getDescricaoArma() 
{
    return this->descricaoArma;
}

int CascaDeArvore::getResistencia() 
{
    return this->resistencia;
}