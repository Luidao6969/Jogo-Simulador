#ifndef CADAVER
#define CADAVER

#include "../core-simulator.hpp/ArmaDefesa.hpp"
class Cadaver : public ArmaDefesa
{
    public:
        Cadaver(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif