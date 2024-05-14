#ifndef BRACO
#define BRACO

#include "../core-simulator.hpp/ArmaDefesa.hpp"
class Braco : public ArmaDefesa
{
    public:
        Braco(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif