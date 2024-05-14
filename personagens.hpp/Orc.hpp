#ifndef ORC
#define ORC
#include "../core-simulator.hpp/Personagem.hpp"
class Orc : public Personagem
{
    public:
        Orc(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif