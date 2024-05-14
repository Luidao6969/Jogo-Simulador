#ifndef CASCADEARVORE
#define CASCADEARVORE

#include "../core-simulator.hpp/ArmaDefesa.hpp"
class CascaDeArvore : public ArmaDefesa
{
    public:
        CascaDeArvore(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif