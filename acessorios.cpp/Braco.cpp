#include "../core-simulator.hpp/ArmaDefesa.hpp"
#include "../acessorios.hpp/Braco.hpp"

Braco::Braco(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Braco::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Braco::getResistencia() 
{
    return this->resistencia;
}