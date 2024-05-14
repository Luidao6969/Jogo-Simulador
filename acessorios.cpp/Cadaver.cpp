#include "../core-simulator.hpp/ArmaDefesa.hpp"
#include "../acessorios.hpp/Cadaver.hpp"

Cadaver::Cadaver(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Cadaver::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Cadaver::getResistencia() 
{
    return this->resistencia;
}