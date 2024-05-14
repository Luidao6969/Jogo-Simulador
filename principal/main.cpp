#include <iostream>
#include <string>
#include "../acessorios.hpp/Espada.hpp"
#include "../acessorios.hpp/Cadaver.hpp"
#include "../acessorios.hpp/Braco.hpp"
#include "../acessorios.hpp/Marreta.hpp"
#include "../acessorios.hpp/Escudo.hpp"
#include "../personagens.hpp/Chaves.hpp"
#include "../personagens.hpp/Orc.hpp"
#include "../personagens.hpp/Cavaleiro.hpp"
#include "../personagens.hpp/Samurai.hpp"
#include "../core-simulator.hpp/Simulador.hpp"
#include "../core-simulator.hpp/ArmaAtaque.hpp"
#include "../core-simulator.hpp/ArmaDefesa.hpp"
#include "../core-simulator.hpp/Personagem.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Espada("Espada de Aco",0,30);
    ArmaAtaque* arma2 = new Marreta("Marreta de Ferro",0,50);
    ArmaAtaque* arma3  = new Espada("Espada Curva",0,30);
    ArmaDefesa* escudo = new Escudo("Escudo de ferro", 40);
    ArmaDefesa* escudo2 = new Cadaver("Homem morto", 25);
    ArmaDefesa* escudo3 = new Braco("Bracos", 15);
    
    Personagem* p1 = new Cavaleiro(1, "Cavaleiro Eq1", 100, arma, escudo);
    Personagem* p3 = new Orc(1, "Orc Eq1 ", 130, arma, escudo3);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, arma, escudo3);
    Personagem* p4 = new Samurai(2, "Samurai Eq2 ", 100, arma3, escudo2);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    system("pause");
    return 0;
}