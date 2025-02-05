#ifndef MARRETA
#define MARRETA

#include "../core-simulator.hpp/ArmaAtaque.hpp"
class Marreta : public ArmaAtaque
{
    public:
        Marreta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif