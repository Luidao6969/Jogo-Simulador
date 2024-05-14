#ifndef GOBLIN
#define GOBLIN
#include "../core-simulator.hpp/Personagem.hpp"
class Goblin : public Personagem
{
    public:
        Goblin(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif