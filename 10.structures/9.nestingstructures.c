#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    typedef struct pokemon {
        int hp;
        int speed; 
        int attack;
        char tier;
        char name[15];
    } pokemon ;

    typedef struct legendarypokemon {
        pokemon normal;
        char ability[100];
    } legendarypokemon ;

    typedef struct godpokemon {
        legendarypokemon legend;
        int special_attack;
    } godpokemon ;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 180;
    strcpy(mewtwo.normal.name, "mewtwo");
    mewtwo.normal.tier = 'S';
    mewtwo.normal.speed = 180;

    godpokemon arceus;
    arceus.special_attack = 300;
    strcpy(arceus.legend.ability, "Turn any one to stone");
    arceus.legend.normal.hp = 500;
    // and so on..........
    return 0;
}