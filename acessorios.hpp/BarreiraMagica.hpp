#ifndef BARREIRAMAGICA
#define BARREIRAMAGICA

#include "../core-simulator.hpp/ArmaDefesa.hpp"
class BarreiraMagica : public ArmaDefesa
{
    public:
        BarreiraMagica(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif