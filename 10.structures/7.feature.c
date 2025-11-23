#include <stdio.h>
#include <string.h>

int main() {
    typedef struct Pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name, "Blastoise");

    b = a; // deep copy
    strcpy(b.name, "Venosaur");
    // b.attack = 200;
    printf("%d\t%d", a.attack, b.attack);
    return 0;
}