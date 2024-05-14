#ifndef ESPELHO
#define ESPELHO

#include "../core-simulator.hpp/ArmaDefesa.hpp"
class Espelho : public ArmaDefesa
{
    public:
        Espelho(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif