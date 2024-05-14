#include "../core-simulator.hpp/ArmaDefesa.hpp"
#include "../acessorios.hpp/BarreiraMagica.hpp"

BarreiraMagica::BarreiraMagica(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string BarreiraMagica::getDescricaoArma() 
{
    return this->descricaoArma;
}

int BarreiraMagica::getResistencia() 
{
    return this->resistencia;
}