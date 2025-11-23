#include <stdio.h>
#include <string.h>

typedef union Pokemon{ // only uses the largest attribute
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon ;
// union only uses only one attribute at a time if same attributes memory
// are there then it will override previous values
int main() {
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    pikachu.attack = 120;
    strcpy(pikachu.name, "Pikachu");

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    return 0;
}