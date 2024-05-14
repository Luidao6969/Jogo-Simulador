#ifndef ESCUDO
#define ESCUDO

#include "../core-simulator.hpp/ArmaDefesa.hpp"
class Escudo : public ArmaDefesa
{
    public:
        Escudo(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif