#include <stdio.h>
int main() {
    struct Pokemon{ // user defined datatype
        int hp; // attributes
        int speed; // attributes
        int attack; // attributes
        char tier;// G,S,A,B,C,D // attributes
    }pikachu , charizard , mewtwo;
    // struct Pokemon pikachu;
    printf("Enter attack of pikachu: ");
    scanf("%d", &pikachu.attack);
    // pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d", pikachu.attack);

    // struct Pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    // struct Pokemon mewtwo;
    mewtwo.attack = 130;
    mewtwo.hp = 80;
    mewtwo.speed = 80;
    mewtwo.tier = 'G';
    return 0;
}