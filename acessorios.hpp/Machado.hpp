#ifndef MACHADO
#define MACHADO

#include "../core-simulator.hpp/ArmaAtaque.hpp"
class Machado : public ArmaAtaque
{
    public:
        Machado(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif