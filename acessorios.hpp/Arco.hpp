#ifndef ARCO
#define ARCO

#include "../core-simulator.hpp/ArmaAtaque.hpp"
class Arco : public ArmaAtaque
{
    public:
        Arco(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif